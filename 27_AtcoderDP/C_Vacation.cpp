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

void run_case(){ 

    int n;
    cin>>n;
    vector<vector<int>> vec(n,vector<int>(3,0));
    for (auto &&i : vec)
    {
        for (auto &&j : i)
        {
            cin>>j;     
        }
    }

    vector<vector<int>> dp(n,vector<int>(3,0));
    dp[0] = vec[0];
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            dp[i][j] = vec[i][j]+ max(dp[i-1][(j+1)%3],dp[i-1][(j+2)%3]);
        }
        
    }
    cout<<*max_element(dp[n-1].begin(),dp[n-1].end())<<endl;
    


}

/****************************************************************************************************/



int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    

    run_case();

    return 0;

}