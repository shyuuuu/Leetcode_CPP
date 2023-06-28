#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {
        int nString = dictionary.size();
        int tempMax = 0;
        int maxIndex = -1;
        int lString = s.length();
        for(int i = 0; i < nString; ++i)
        {
            int length = dictionary[i].length();
            if(length>=tempMax){
                int index = length-1;
                int t = lString-1;
                while((index>=0)&&(t>=0)){
                    if(s[t] == dictionary[i][index]){
                        --t;
                        --index;
                    }else{
                        --t;
                    }
                }
                if(index<0){
                    if(length>tempMax || dictionary[maxIndex] > dictionary[i]){
                        tempMax = length;
                        maxIndex = i;
                    }
                }
            }
        }
        if(maxIndex != -1){
            return dictionary[maxIndex];
        }else{
            return "";
        }
    }
};