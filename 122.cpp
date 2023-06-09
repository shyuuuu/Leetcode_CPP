#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int count = 0;
        int sale = prices[size-1];
        for(int i = size-2; i >= 0; i--)
        {
            if(prices[i] < sale)
                count += sale - prices[i];
            sale = prices[i];
        }
        return count;
    }
};