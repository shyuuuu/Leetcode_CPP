#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        vector<vector<int>> queue;
        sort(people.begin(),people.end(),[](vector<int>& a,vector<int>& b) { return (a[1] < b[1])||((a[1] == b[1]) && (a[0] > b[0])); });
        int size = people.size();
        int init = people[0][1];
        int temp;
        for(temp = 0; temp<size && people[temp][1]==init; temp++)
        {
            queue.insert(queue.begin(), people[temp]);
        }
        for(int i = temp; i < size; i++)
        {
            int count = 0, j = 0;
            while (count < people[i][1]){
                if(queue[j][0] >= people[i][0]){
                    count++;
                }
                j++;
            }
            queue.insert(queue.begin() + j, people[i]);
        }
        return queue;
    }
};