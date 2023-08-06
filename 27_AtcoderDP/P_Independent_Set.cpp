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



const int N = 1e5+1;
int n;
vector<int> adj[N];
const int mod = 1e9+7;
int memo[N][2];
/*****************************************************************************************************/
int dfs(int parent, int child, int color){

    long long int ans = 1;

    if(memo[child][color]!=-1){
        return memo[child][color];
    }
    for (auto &&i : adj[child])
    {
        if(i!=parent){
            if(color){
                ans*= (dfs(child,i,0)+dfs(child,i,1))%mod;
                ans = ans%mod;
            }
            else{
                ans*= (dfs(child,i,1)%mod);
                ans = ans%mod;
            }
        }
    }
    return (memo[child][color] = ans);
    
    
}

void run_case(){ 

    cin>>n;
    int edge = n-1;
    while(edge--){
        int x, y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(memo,-1,sizeof(memo));
    cout<<(dfs(0,1,1)+dfs(0,1,0))%mod<<endl;



}

/****************************************************************************************************/



int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    

    run_case();

    return 0;

}