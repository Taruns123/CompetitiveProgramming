#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
#define yes "YES"
#define no "NO"
#define all(x)   (x).begin(),(x).end()
#define pb push_back
#define mp make_pair
typedef vector<int> vi;
typedef vector<long long int> vlli;
typedef long long lli;
typedef vector<pair<int,int>> vpii;
typedef pair<int,int> pii;
typedef pair<int,char> pic;
typedef pair<char,int> pci;



/*****************************************************************************************************/
const int mod = 1e9+7;
void run_case(){ 

    int n, candies;
    cin>>n>>candies;

    vector<int> kids(n);
    for (auto &&i : kids)
    {
        cin>>i;
    }

    vector<vector<int>> dp(n+1,vector<int>(candies+1,0));

    dp[0][0] = 1;
    vector<int> prefSum(candies+1,1);
    for (int i = 1; i <= n; i++)
    {
        
        
        for (int j = 0; j <= candies; j++)
        {
            
             dp[i][j]+= prefSum[j];
             if((j-kids[i-1])>0) {dp[i][j] -= prefSum[j-kids[i-1]-1];}
             
             dp[i][j] = ((dp[i][j]%mod)+mod)%mod;
            
        }
        for (int index = 1; index <= candies; index++)
        {
            prefSum[index]  = (prefSum[index-1]%mod + dp[i][index]%mod)%mod;
        }
        
    }



    
    

    cout<<dp[n][candies]<<endl;
    
    
    
    



}

/****************************************************************************************************/



int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    

    run_case();

    return 0;

}