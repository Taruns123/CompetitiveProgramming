#include<bits/stdc++.h>
using namespace std;
#define int long long 

const int N = 1e5+10;
const int mod = 1e9+7;
int memo[N][105];
int numWays(vector<int> kids, int i, int candLeft){
    if(i==kids.size()){
        if(candLeft == 0){
            return 1;
        }
        else return 0;
    }
// *******************************************************************
// ************************* Not done yet ****************************
// *******************************************************************
    if(memo[candLeft][i]!=-1) return memo[candLeft][i];

    int ans = 0;
    for (int j = 0; j <= kids[i] && candLeft-j>=0; j++)
    {
        ans =  ((ans%mod) +0ll+ (numWays(kids,i+1,candLeft-j)%mod))%mod;
    }

    return memo[candLeft][i] = ans%mod;
    
}


/*****************************************************************************************************/

void run_case(){ 

    int n,m;
    cin>>n>>m;
    
    vector<int> kids(n);
    for (auto &&i : kids)
    {
        cin>>i;
    }
    memset(memo,-1,sizeof(memo));
    
    cout<<numWays(kids,0,m)<<endl;

}

/****************************************************************************************************/



int32_t main(int32_t argc, char const *argv[])
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    

    run_case();

    return 0;

}