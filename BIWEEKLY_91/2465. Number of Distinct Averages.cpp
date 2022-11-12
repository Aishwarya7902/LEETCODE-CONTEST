PROBLEM:https://leetcode.com/contest/biweekly-contest-91/problems/number-of-distinct-averages/
VIDEO:

/*
METHOD 1
TC: O(N) + NLOG(N)
SC: O(N/2) =~O(N)
*/

class Solution {
public:
    int distinctAverages(vector<int>& nums) {
      
      set<float>s;
      sort(nums.begin(),nums.end()); //nlogn
      int n=nums.size();
      int i=0,j=n-1;
      while(i<j){
        s.insert((nums[i]+nums[j])/2.0);
        nums.erase(nums.begin()+i);
        //nums.pop_front();
        nums.pop_back();
        i++;
        j--;
      }
      return s.size();
    }
};
