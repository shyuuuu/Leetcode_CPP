class Solution {
public:
    int mySqrt(int x) {
        if(x == 0)
            return 0;
        int l = 1, r = x, mid, temp = 0;
        while(l<=r){
            mid = l + (r - l) / 2;
            temp = x / mid;
            if(temp < mid){
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        return r;
    }
};