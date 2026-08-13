class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0;
        int currjend = 0;
        int fthst = 0;
        for(int i = 0; i < nums.size(); i++){
            fthst = max(fthst, i + nums[i]);
            if(i == currjend){
                jumps++;
                currjend = fthst;
            }
            if(currjend >= nums.size() - 1) break;
        }
        return jumps;
    }
};
