class Solution {
public:

    string encode(vector<string>& strs) {
        string ens = "";
        for(string s : strs){
            ens += to_string(s.length()) + "#" + s;
        }
        return ens;
    }

    vector<string> decode(string s) {
        vector<string> dns;
        int i = 0;
        while(i < s.length()){
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            int l = stoi(s.substr(i, j - i));
            i = j + 1;
            string str = s.substr(i, l);
            dns.push_back(str);
            i += l;
        }
        return dns;
    }
};
