class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        if (intervals.size() <= 1) {
            return intervals;
        }
        sort(intervals.begin(), intervals.end());
        int start = intervals[0][0];
        int end = intervals[0][1];
        
        for (int i = 1; i < intervals.size(); ++i) {
            if (end >= intervals[i][0]) {
                end = max(end, intervals[i][1]);
                continue;
            }
            res.push_back({start, end});
            start = intervals[i][0];
            end = intervals[i][1];
            
        }
        res.push_back({start, end});
        return res;
    }
};
