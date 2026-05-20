class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {  
        vector<int> result;
        int p = 1;      
        int n = nums.size();
        for(int i = 0;i < n; i++){
            for(int j = 0; j < n; j++){
                if(j == i) continue;
                p *= nums[j]; 
            }
            result.push_back(p);
            p = 1;
        }
        return result;
    }
};
