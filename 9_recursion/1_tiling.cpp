#include<bits/stdc++.h>
using namespace std;

int tile(int N, int dp[]){
    if(N==0|N==1 || N==2 || N==3){
        return 1;
    }

    if(dp[N]){
        return dp[N];
    }
    else{
        return dp[N] = tile(N-1,dp)+tile(N-4,dp);
    }
}


int main(int argc, char const *argv[])
{

    int N ;
    int dp[100005];
    memset(dp,100005,0);
    cin>>N;
    cout<<tile(N,dp)<<endl;
    return 0;

}