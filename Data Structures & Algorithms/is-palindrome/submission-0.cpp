class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> vs;
        for(int i = 0; i < s.length(); i++){
            if(isalnum(s[i])){
                vs.push_back(tolower(s[i]));
            }
            
        }
        int n = vs.size();
        int m = n/2;
        int f = 0, b = n - 1;
        while(f <= m && b >= m){
            if(vs[f] != vs[b]){
                return false;
                break;
            }
            f++;
            b--;
        }
        return true;
    }
};
