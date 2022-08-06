/*PROBLEM :https://leetcode.com/contest/biweekly-contest-84/problems/merge-similar-items/
TC: O(N)
SC:O(N)
VIDEO:
BLOG:    1.https://leetcode.com/problems/merge-similar-items/discuss/2388269/Group-by-values-oror-With-Intuition
Intuition:

Basically the question is telling for grouping weightsum with their values.
The above statement gives intuition of using a data structure which uses key value pair. Whats the answer for that??
The answer is yes map or hashmap.

So we will just add the add the weights to the weights of their corresponding value as key in map
Now we need keys in sorted order of values, so we will use map over hashmap.
Just extract pairs of value ans sum of weights in the form of 2D array.
*/
class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>>ans;
        map<int,int>mp;
        for(auto i:items1){
            mp[i[0]]+=i[1];
        }
        for(auto i:items2){
            mp[i[0]]+=i[1];
        }
        for(auto it:mp){
            ans.push_back({it.first,it.second});
        }
        return ans;
    }
};
