class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       int longestreak = 0;
       unordered_set<int> numset (nums.begin(), nums.end());
       for(int nums : numset){
        if(numset.find(nums - 1) == numset.end()){
            int currentnum = nums;
            int currentstreak = 1;
            while(numset.find(currentnum + 1) != numset.end()){
                currentstreak += 1;
                currentnum += 1;
            }
            longestreak = max(longestreak, currentstreak);
        }
       } 
       return longestreak;
    }
};
