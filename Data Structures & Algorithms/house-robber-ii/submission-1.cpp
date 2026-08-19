class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        int prev1 = 0;
        int prev2 = 0;
        for(int i = 0; i < nums.size() - 1; i++){
            int currentsum = max(prev1, prev2 + nums[i]);
            prev2 = prev1;
            prev1 = currentsum;
        }
        int idx0n2 = prev1;
        prev1 = 0;
        prev2 = 0;
        for(int i = 1; i < nums.size(); i++){
            int currentsum = max(prev1, prev2 + nums[i]);
            prev2 = prev1;
            prev1 = currentsum;
        }
        int idx1n1 = prev1;
        return max(idx0n2, idx1n1);
    }
};
