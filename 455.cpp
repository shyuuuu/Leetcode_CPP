#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int children = 0,cookie = 0;
        while(children<g.size()&&cookie<s.size()){
            if(g[children]<=s[cookie])
                children++;
            cookie++;
        }
        return children;
    }
};