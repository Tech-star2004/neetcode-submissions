class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxheight = 0;
        int n = heights.size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                int width = j - i;
                int currentheight = min(heights[i], heights[j]) * width;
                maxheight = max(maxheight, currentheight);
            }
        }
        return maxheight;
    }
};
