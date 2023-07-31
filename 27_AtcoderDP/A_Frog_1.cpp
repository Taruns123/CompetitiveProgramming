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

    int n;
    cin>>n;
    vector<int> vec(n);
    for (auto &&i : vec)
    {
        cin>>i;
    }

    vector<int> dp(n);
    dp[1] = abs(vec[1]-vec[0]);
    for (int i = 2; i < n; i++)
    {
        int i1 = dp[i-1] + abs(vec[i]-vec[i-1]);
        int i2 = dp[i-2] + abs(vec[i]-vec[i-2]);
        dp[i] = min(i1,i2);
    }
    cout<<dp[n-1]<<endl;
}
//////////////////////////////////////////////////////
// 2nd approach 
int frog(vi vec, int i){
    if(i==0){
        return 0;
    }
    else if(i==1){
        return abs(vec[1]-vec[0]);
    }

    int i1 = abs(vec[i]-vec[i-1]);
    int i2 = abs(vec[i]-vec[i-2]);
    return min(i1+frog(vec,i-1),i2+frog(vec,i-2));
}
// memoisation method
void run_case2(){
    int n;
    cin>>n;
    vi vec(n);
    vi dp(n,-1);
    for (auto &&i : vec)
    {
        cin>>i;
    }

    cout<<frog(vec,n-1)<<endl;
    
}

/****************************************************************************************************/



int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    

    run_case2();

    return 0;

}