#include <vector>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();
        if(size == 1){
            return n <= ((flowerbed[0] == 1) ? 0 : 1);
        }
        if(size == 2){
            return n <= ((flowerbed[0] == 0 && flowerbed[1] == 0) ? 1 : 0);
        }
        int count = 0;
        if(flowerbed[0] == 0 && flowerbed[1] == 0){
            flowerbed[0] = 1;
            count++;
        }
        for(int i = 1; i < size - 1; i++)
        {
            if(flowerbed[i] == 0 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0){
                flowerbed[i] = 1;
                count++;
            }
        }
        if(flowerbed[size-2] == 0 && flowerbed[size-1] == 0)
            count++;
        return n <= count;
    }
};