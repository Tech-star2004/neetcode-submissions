class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        stack<int> st;
        int maxArea = 0;
        for(int i = 0; i <= h.size(); i++){
            while(!st.empty() && (i == h.size() || h[st.top()] >= h[i])){
                int height = h[st.top()];
                st.pop();
                int width;
                if(st.empty()) width = i;
                else width = i - st.top() - 1;
                maxArea = max(maxArea, height * width);
            }
            st.push(i);
        }
        return maxArea;
    }
};
