#include <vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1, mid;
        int begin = -1, end = -1;
        while(l<r){
            mid = l + (r-l)/2;
            if(nums[mid]>target)
                r = mid - 1;
            else if(nums[mid]<target)
                l = mid + 1;
            else if(nums[mid]==target){
                begin = end = mid;
                while((--begin>-1)&&(nums[begin]==target))
                    ;
                ++begin;
                while((++end<nums.size())&&(nums[end]==target))
                    ;
                --end;
                break;
            }
        }
        if((r == l)&&(nums[r]==target))
            return vector<int>{r,r};
        return vector<int>{begin,end};
    }
};