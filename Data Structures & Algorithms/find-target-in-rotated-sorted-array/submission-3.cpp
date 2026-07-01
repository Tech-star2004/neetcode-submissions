class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        while(l < r){
            int mid = l + (r - l) / 2;
            if(nums[l] < nums[mid]) l = mid + 1;
            else r = mid;
        }
        int pivot = l;
        if(nums[pivot] == target) return pivot;
        l = 0;
        if(target > nums[l] && target < nums[pivot]){
            r = pivot;
            while(l <= r){
                int mid = l + (r - l) / 2;
                if(target < nums[mid]) r = mid - 1;
                else if(target > nums[mid]) l = mid + 1;
                else return mid;
            }
        }
        else{
            l = pivot;
            r = nums.size() - 1;
            while(l <= r){
                int mid = l + (r - l) / 2;
                if(target < nums[mid]) r = mid - 1;
                else if(target > nums[mid]) l = mid + 1;
                else return mid;
            }
        }
        return -1;
    }
};
