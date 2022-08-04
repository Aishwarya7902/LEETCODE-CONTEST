/*MY APPROACH
TC:nlogn+o(n^2)....hence o(n^2)
SC:O(1)
*/

class Solution {
public:
    //tc :o(n*n)
    int minimumOperations(vector<int>& nums) {
        if(nums.size()==1 && nums[0]==0)return 0;
     int cnt=0;
        int i=0,j,x;
        sort(nums.begin(),nums.end());
        while(i<nums.size()){
            if(nums[i]==0){
                i++;
            }
            else {
                cnt++;
                j=i;
                x=nums[i];
                while(j<nums.size()){
                  if(nums[j]>0)
                      nums[j]-=x;
                    j++;
                }
                i++;
            }      
            }
        return cnt;
    }
};


/*OPTIMISATION
VIDEO:  https://www.youtube.com/watch?v=wSQcNZ9zmaY
TC: O(N)
SC: O(N)
*/

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
      //no of operations =no of unique positive elements in the array.
      // to keep a track of  unique elements we will use a set
        set<int>s;
        for(auto x:nums){
            if(x!=0)
                s.insert(x);
        }
        return s.size();
    }
};
