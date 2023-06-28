#include <string>
using namespace std;

class Solution {
public:
    bool validPalindrome(string s) {
        int i = 0, j = s.length()-1;
        int deleted = 0;
        int tempI = 0, tempJ = 0;
        while(i <= j + 1){
            if(s[i] != s[j]){
                if(deleted < 2){
                    if(deleted == 0){
                        tempI = i;
                        tempJ = j;
                        --j;
                        ++deleted;
                    }else{
                        i = tempI + 1;
                        j = tempJ;
                        ++deleted;
                    }
                    continue;
                }else{
                    return false;
                }
            }
            ++i;
            --j;
        }
        return true;
    }
};