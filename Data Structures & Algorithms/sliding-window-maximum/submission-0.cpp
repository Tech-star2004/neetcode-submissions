class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        int n = nums.size();
        if(n == k){
            auto it = max_element(nums.begin(), nums.end());
            res.push_back(*it);
            return res;
        }
        int left = 0;
        int right = k - 1;
        while(right < n){
            int m = INT_MIN;
            for(int i = left; i <= right; i++){
                m = max(m, nums[i]);
            }
            res.push_back(m);
            left++;
            right++;
        }
        return res;
    }
};
