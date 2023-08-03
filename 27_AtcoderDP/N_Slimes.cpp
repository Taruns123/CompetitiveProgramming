// similar problems matrix chain multiplication
#include<bits/stdc++.h>
using namespace std;
#define int long long 



/*****************************************************************************************************/
const int N = 400;
int memo[N][N];
int n, a[N], pref[N];

int sum(int l,int r){
    if(l==0) return pref[r];
    return pref[r]-pref[l-1];
}
int dp(int l , int r ){
    if(l==r) return 0;
    if(memo[l][r]!=-1){
        return memo[l][r];
    }
    int ans = 1e18;

    for (int i = l; i < r ; i++)
    {
        int l1,r1,l2,r2;
        l1 = l;
        r1 = i;
        l2 = i+1;
        r2 = r;
        ans= min(ans,dp(l1,r1)+dp(l2,r2) + sum(l,r));
    }
    return memo[l][r] = ans;
    
}

void run_case(){ 

    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    pref[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i-1]+a[i];
    }

    memset(memo,-1, sizeof(memo));
    
    cout<<dp(0,n-1)<<endl;
    
    


}

/****************************************************************************************************/



int32_t main(int32_t argc, char const *argv[])
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    

    run_case();

    return 0;

}