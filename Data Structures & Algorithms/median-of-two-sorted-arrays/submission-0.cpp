class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> combine;
        int i = 0, j = 0;
        while(i < n && j < m){
            if(nums1[i] < nums2[j]){
                combine.push_back(nums1[i]);
                i++;
            }
            else{
                combine.push_back(nums2[j]);
                j++;
            }
        }
        while(i < n){
            combine.push_back(nums1[i]);
            i++;
        }
        while(j < m){
            combine.push_back(nums2[j]);
            j++;
        }
        int k = n + m;
        if(combine.size() % 2 == 0) return (combine[(k - 1) / 2] + combine[k / 2]) / 2.0;
        else return combine[(k - 1) / 2];
    }
};
