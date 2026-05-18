class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> result;
        unordered_map<int, int> count;
        for(int num : nums){
            count[num]++;
        }
        vector<vector<int>> bucket(n + 1);
        for(auto& pair : count){
            bucket[pair.second].push_back(pair.first);
        }
        for(int i = n; i > 0; i--){
            if(!bucket[i].empty()){
                for(int num : bucket[i]){
                    result.push_back(num);
                    if(result.size() >= k)
                    return result;
                }
            }
        }
        return result;
    }
};
