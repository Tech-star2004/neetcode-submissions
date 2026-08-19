class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int mnmrmv = 0;
        sort(intervals.begin(), intervals.end(), [](const vector<int> a, const vector<int> b){
            return a[1] < b[1];
        });
        int lsted = intervals[0][1];
        for(int i = 1; i < intervals.size(); i++){
            if(intervals[i][0] < lsted) mnmrmv++;
            else lsted = intervals[i][1];
        }
        return mnmrmv;
    }
};
