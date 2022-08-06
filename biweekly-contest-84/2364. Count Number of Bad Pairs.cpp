/*PROBLEM :  https://leetcode.com/contest/biweekly-contest-84/problems/count-number-of-bad-pairs/
*/
/*
BRUTE FORCE :(GOT TLE 😣)
TC :O(N^2)
SC: O(1)
VIDEO:
BLOG:
PSEUDO CODE:

*/

class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
         long long cnt=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++)
            {
                if(i<j && j-i!=nums[j]-nums[i])
                    cnt++;
            }
        }
        return cnt;
    }
};

/*
OPTIMISATION:
TC :O(n)
SC: O(n)
VIDEO:  https://www.youtube.com/watch?v=ahFuc87-S1o
BLOG:
PSEUDO CODE:

*/

class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        map<long long,long long>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]-i]++;
        }
        long long ans=(long long)n*((long long)n-1)/2;
        for(auto it:mp){
            ans=ans-(it.second*(it.second-1)/2);
        }
        return ans;
    }
};

