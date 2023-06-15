#include <cmath>

class Solution {
public:
    bool judgeSquareSum(int c) {
        long i = 0, j = (int)sqrt(c);
        long temp = 0;
        while(i <= j){
            temp = i*i + j*j;
            if(temp<c)
                ++i;
            else if(temp>c)
                --j;
            else
                return true;
        }
        return false;
    }
};