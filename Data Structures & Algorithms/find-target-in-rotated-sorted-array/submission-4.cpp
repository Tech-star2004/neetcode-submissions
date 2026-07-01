class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        while(l < r){
            int mid = l + (r - l) / 2;
            if(nums[mid] > nums[r]) l = mid + 1;
            else r = mid;
        }
        int pivot = l;
        if(nums[pivot] == target) return pivot;
        if(target >= nums[pivot] && target <= nums[nums.size() - 1]){
            l = pivot;
            r = nums.size() - 1;
        }
        else{
            l = 0;
            r = pivot - 1;
        }
        while(l <= r){
            int mid = l + (r - l) / 2;
            if(target < nums[mid]) r = mid - 1;
            else if(target > nums[mid]) l = mid + 1;
            else return mid;
        }
        return -1;
    }
};
