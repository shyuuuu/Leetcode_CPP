#include <string>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        int alphabet[128] = {0};
        int count = 0;
        int tempMin = s.length() + 1;
        int recordi = -1;
        int recordj = -1;
        for(int i = 0; i < t.size(); ++i)
        {
            ++alphabet[t[i]];
            ++count;
        }
        for(int i = 0, j = 0; i<s.length();++i)
        {
            --alphabet[s[i]];
            if(alphabet[s[i]]>=0) {
                --count;
            }
            if(count==0){
                for(;alphabet[s[j]]<0;++j)
                    ++alphabet[s[j]];
                if(tempMin > i - j + 1){
                    tempMin = i - j + 1;
                    recordi = i;
                    recordj = j;
                }
            }
        }
        if(tempMin<=s.length())
            return s.substr(recordj,recordi-recordj+1);
        else
            return "";
    }
};