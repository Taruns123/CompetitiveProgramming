#include<bits/stdc++.h>
using namespace std;
#define int long long


/*****************************************************************************************************/

void run_case(){ 

    int n,k;
    cin>>n>>k;
    vector<int> moves(n);
    for (auto &&i : moves)
    {
        cin>>i;
    }
    
    vector<int> dp(k+1);
    dp[0] = 0;
    for (int i = 0; i < k+1; i++)
    {
        
        for (int j = 0; j < n; j++)
        {
            if((i-moves[j])>=0 && dp[i-moves[j]]==0){
                dp[i] =  1;
                break;
            }
        }
        
    }

    if(dp[k]==0){
        cout<<"Second"<<endl;
    }
    else cout<<"First"<<endl;
    


}

/****************************************************************************************************/



int32_t main(int32_t argc, char const *argv[])
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    

    run_case();

    return 0;

}