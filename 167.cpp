#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int size = numbers.size();
        int i = 0, j = size, sum = 0;
        while((sum = numbers[i]+numbers[j-1]) != target){
            if(sum > target)
                j--;
            else
                i++;
        }
        vector<int> arr = {i+1, j};
        return arr;
    }
};