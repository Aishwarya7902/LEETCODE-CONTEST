PROBLEM:https://leetcode.com/contest/biweekly-contest-85/problems/minimum-recolors-to-get-k-consecutive-black-blocks/

/*
tc: O(N)
sc: O(1)
video:
blog:
PSEUDO CODE:
Maintain Sliding window of size K and minimize the no. of 'W' in window
*/

public:
    int minimumRecolors(string blocks, int k) {
        int i=0,j=0;
        int ans=INT_MAX;
        int cnt=0;
        while(j<blocks.size()){
            if(blocks[j]=='W')  //kuch kam to karna hi padega
                cnt++;
            if(j-i+1<k)
                j++;   //jabtak apna time ni aata badhte jao
            else if(j-i+1==k){  //once tumhara time aa jaye
                ans=min(ans,cnt); //apne kiye gaye kam me se ek ans nikalne ki kosis karo
                if(blocks[i]=='W') //before moving window ...agr ith place pe W tha to cnt-- karo
                    cnt--;
                i++;
                j++;
            }
        }
        return ans;
    }
};
