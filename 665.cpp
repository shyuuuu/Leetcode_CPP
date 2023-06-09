#include <vector>
using namespace std;

class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        nums.insert(nums.begin(),-100001);
        nums.push_back(100001);
        int size = nums.size();
        bool modify = false;
        for(int i = 2; i < size; i++)
        {
            if(nums[i] < nums[i-1]){
                if(modify == true)
                    return false;
                if(!(nums[i]>=nums[i-2]||nums[i+1]>=nums[i-1]))
                    return false;
                else
                    modify = true;
            }
        }
        return true;
    }
};