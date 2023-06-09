#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> result;
        int start = 0;
        int end = 0;
        int size = s.size();
        for(int i = 0; i < size; i++)
        {
            start = i;
            end = s.rfind(s[start]);
            for( ; i < end; i++)
            {
                int temp = s.rfind(s[i]);
                end = (end >= temp ? end : temp);
            }
            result.push_back(end - start + 1);
        }
        return result;
    }
};