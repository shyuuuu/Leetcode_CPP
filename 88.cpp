#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int size = nums1.size();
        while(size > 0){
            if(m > 0 && n > 0 && nums1[m-1] > nums2[n-1]){
                nums1[size-1] = nums1[m-1];
                --m;
                --size;
            }else{
                if(m > 0 && n > 0){
                    nums1[size-1] = nums2[n-1];
                    --n;
                    --size;
                }else{
                    if(m == 0){
                        while(n > 0){
                            nums1[size-1] = nums2[n-1];
                            --n;
                            --size;
                        }
                    }else{
                        return ;
                    }
                }
            }
        }
    }
};