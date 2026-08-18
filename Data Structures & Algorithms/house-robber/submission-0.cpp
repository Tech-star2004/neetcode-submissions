class Solution {
public:
    int rob(vector<int>& nums) {
        int p2 = 0;
        int p1 = 0;
        for(int i = 0; i < nums.size(); i++){
            int current = max(p1, p2 + nums[i]);
            p2 = p1;
            p1 = current;
        }
        return p1;
    }
};
