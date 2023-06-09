#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int size = points.size(), count = 1;
        sort(points.begin(),points.end(),[](vector<int>& a,vector<int>& b) -> bool { return a[1] < b[1]; });
        int i = 1;
        int last = points[0][1];
        while(i < size){
            if(points[i][0] > last){
                count++;
                last = points[i][1];
            }
            i++;
        }
        return count;
    }
};