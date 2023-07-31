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
// tabulation method  - bottom up approach
void run_case1(){ 

    int n,k;
    cin>>n>>k;
    vector<int> vec(n);
    for (auto &&i : vec)
    {
        cin>>i;
    }

    vector<int> dp(n);
    dp[1] = abs(vec[1]-vec[0]);
    for (int i = 2; i < n; i++)
    {   int i1= INT_MAX;
        for (int j = 1; j <= k && (i-j)>=0; j++)
        {
            i1 = min(i1,dp[i-j] +abs(vec[i]-vec[i-j]));
        }
        
        dp[i] = i1;
    }
    cout<<dp[n-1]<<endl;
}
//////////////////////////////////////////////////////


/****************************************************************************************************/



int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    

    run_case1();

    return 0;

}