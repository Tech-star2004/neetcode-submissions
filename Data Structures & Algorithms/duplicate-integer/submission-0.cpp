class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int i, j, n = nums.size();
        bool check = false;
        for(i = 0; i < n; i++){
            for(j = i + 1; j < n; j++){
                if(nums[i] == nums[j]){
                    check = true;
                    break;
                }
            }
        }
        return check;
    }
};