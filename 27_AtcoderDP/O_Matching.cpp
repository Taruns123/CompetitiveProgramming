#include<bits/stdc++.h>
using namespace std;
// #define int long long  


/*****************************************************************************************************/
int mod = 1e9+7;
const int N = 21;
int n;
int match[N][N];
int64_t memo[N][1<<N];

int dp(int i, int bit){
    if(i==n) return 1;

    if(memo[i][bit]!=-1){
        return memo[i][bit];
    }

    int ans = 0;
    for (int j = 0; j < n; j++)
    {
        if((match[i][j]==1) && ((((bit>>j) & 1))==1)){
            ans  = ((ans%mod) + 0ll +(dp(i+1,(bit^(1<<j)))%mod))%mod;
        }
    }
    return (memo[i][bit] = ans%mod);
    
    
}

void run_case(){ 

    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>match[i][j];
        }
        
    }
    memset(memo,-1, sizeof(memo));
    
    cout<<dp(0,(1<<n) -1)<<endl;

    


}

/****************************************************************************************************/



int32_t main(int32_t argc, char const *argv[])
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    

    run_case();

    return 0;

}