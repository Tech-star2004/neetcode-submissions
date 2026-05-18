class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>result;
        for(string s : strs){
            string k = s;
            sort(k.begin(), k.end());
            result[k].push_back(s);
        }
        vector<vector<string>> ana;
        for(auto& pair : result){
            ana.push_back(pair.second);
        }
        return ana;
    }
};
