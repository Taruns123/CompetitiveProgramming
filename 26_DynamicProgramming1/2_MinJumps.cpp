#include<bits/stdc++.h>
using namespace std;

vector<int> dp(10000,0);
class Solution {
public:
    

    int minJump(vector<int> nums,int i, int n){
        if(i == n-1) return 0;
        if(i>= n) return INT_MAX;
        if(dp[i])return dp[i];
        int ans = INT_MAX-1;
        for(int j=1 ; j<=nums[i]; j++){
            ans = min(ans,minJump(nums,i+j,n));
        
        }
        return dp[i] =  ans+1;

    }
    int jump(vector<int>& nums) {
        memset(&dp[0],0,sizeof(dp[0]) * dp.size());
        return minJump(nums,0,nums.size());

    }
};

int main(int argc, char const *argv[])
{
    Solution s;

    vector<int> pos = {1,4,2,3,4,2,11};
    cout<<s.jump(pos)<<endl;
    return 0;
}
