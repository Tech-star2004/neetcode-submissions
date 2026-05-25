class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max_area = 0;
        int left = 0;
        int right = heights.size() - 1;        
        while (left < right) {
            int width = right - left;
            int current_height = min(heights[left], heights[right]);
            int current_area = width * current_height;
            max_area = max(max_area, current_area);
             if (heights[left] < heights[right]) {
                left++;
            } else {
                right--;
            }
        }       
        return max_area;
    }
};