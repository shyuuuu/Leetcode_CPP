#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(),intervals.end(),[](vector<int>& a,vector<int>& b) -> bool {return a[1] < b[1];});
        int temp_end = intervals[0][1];
        int count = 0;
        for(int i = 1; i < n; i++)
        {
            if(temp_end <= intervals[i][0])
                temp_end = intervals[i][1];
            else
                count++;
        }
        return count;
    }
};