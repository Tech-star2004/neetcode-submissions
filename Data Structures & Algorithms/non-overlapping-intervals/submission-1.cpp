class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int mnmrmv = intervals.size();
        sort(intervals.begin(), intervals.end(), [](const vector<int> a, const vector<int> b){
            return a[1] < b[1];
        });
        int lsted = INT_MIN;
        for(int i = 0; i < intervals.size(); i++){
            if(intervals[i][0] >= lsted){
                mnmrmv--;
                lsted = intervals[i][1];
            }
        }
        return mnmrmv;
    }
};
