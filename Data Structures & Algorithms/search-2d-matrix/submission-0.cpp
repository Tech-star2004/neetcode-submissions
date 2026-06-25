class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty() || matrix[0].empty()) return true;
        int m = matrix.size();
        int n = matrix[0].size();
        int l = 0;
        int r = (m * n) - 1;
        while (l <= r){
            int mid = l + (r - l) / 2;
            int rows = mid / n;
            int cols = mid % n;
            int curr = matrix[rows][cols];
            if(curr == target) return true;
            else if(curr < target) l = mid + 1;
            else r = mid - 1;
        }
        return false;
    }
};
