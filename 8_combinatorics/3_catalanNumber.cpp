// to find the number of posssible binary trees given n nodes

#include<bits/stdc++.h>
using namespace std;

int countBin(int n){

    if(n==0 || n==1){
        return 1;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {

        int x  = countBin(i-1);
        int y = countBin(n-i);
        ans += x*y;
    }
    return ans;

    
    

}

// this is a top down dp approach

int countBinDP(int n, int dp[]){

    if(n==0 || n==1){
        return 1;
    }

    if(dp[n]){
        return dp[n];
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {

        int x  = countBinDP(i-1,dp);
        int y = countBinDP(n-i,dp);
        ans += x*y;
    }
    return dp[n]=ans;
}


int main(int argc, char const *argv[])
{

    int n ;
    cin>>n;

    int dp[10000];
    memset(dp,10000,0);
    cout<<countBin(n)<<endl;
    cout<<countBinDP(n,dp)<<endl;
    return 0;

}