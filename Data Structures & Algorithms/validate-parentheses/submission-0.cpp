class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, int> count;
        for(char c : s){
            count[c]++;
        }
        for(int i = 0; i < s.length(); i++){
            if(count['('] != count[')'] || count['['] != count[']'] || count['{'] != count['}']){
                return false;
                break;
            }
        }
        return true;
    }
};
