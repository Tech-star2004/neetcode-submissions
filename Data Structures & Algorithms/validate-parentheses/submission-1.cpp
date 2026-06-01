class Solution {
public:
    bool isValid(string s) {
        if(s.length() % 2 != 0) return false;
        stack<char> res;
        int m = s.length() / 2;
        for(int i = 0; i < m; i++) res.push(s[i]);
        for(int i = m; i < m * 2; i++){
            if(res.top() == s[i]) res.pop();
        }
        if(res.empty()) return false;
        else return true;
    }
};
