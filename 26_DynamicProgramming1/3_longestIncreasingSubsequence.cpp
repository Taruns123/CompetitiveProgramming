#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int len = 1;
        vector<int> dp(nums.size(),1);
        for(int i =0; i<nums.size();i++){
            for(int j = 0 ; j<i; j++){
                if(nums[j]<nums[i]){
                    dp[i] = max(dp[i],dp[j]+1);
                    len = max(len,dp[i]);
                }
            }
        }
        return len;

    }
};
int main(int argc, char const *argv[])
{
    Solution sol;
    vector<int> val  = {1,2,3,4,5,6,7};
    cout<<sol.lengthOfLIS(val)<<endl;
    
    return 0;

}