#include<bits/stdc++.h>
using namespace std;

int ladderTD(int n,int k, int * dp){
    if(n==1){
        return 1;
    }
    if(n<=0){
        return 0;
    }
    int ans = 0;
    for (int i = 1; i <= k; i++)
    {
        ans += ladderTD(n-k,k,dp);
    }
    return ans;
    
}

int main(int argc, char const *argv[])
{
    int dp[100];
    int val = ladderTD(5,1,dp);
    cout<<val<<endl;
    return 0;

}