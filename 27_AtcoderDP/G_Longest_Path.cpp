#include<bits/stdc++.h>
using namespace std;
#define int long long 
typedef vector<int> vi;



/*****************************************************************************************************/
const int N = 1e5+10;
vector<int> vec[N+1];

int dp[N];
int longPath(int i, vector<int> adj[]){

    int &ans = dp[i]; 
    if(ans!=-1) {return ans;}
    ans = 0;
    for (int j = 0; j < adj[i].size(); j++)
    {   
            ans = max(ans,longPath(adj[i][j],adj)+1);
    }
    return (dp[i] = ans);
    
}


void run_case(){ 
    int n,m;
    cin>>n>>m;


    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin>>x>>y;
        vec[x].push_back(y);
    }
    memset(dp,-1,sizeof(dp));
    int ans = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        ans = max(ans,longPath(i,vec));
    }
    
    cout<<ans<<endl;


}

/****************************************************************************************************/



int32_t main(int32_t argc, char const *argv[])
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    

    run_case();

    return 0;

}



// const int N = 1e5 + 1;
// vector<int> gr[N];
// int memo[N];

// int dp(int cur) {
// 	int &ans = memo[cur];
// 	if (ans != -1) return ans;
// 	ans = 0;
// 	for (auto x : gr[cur]) {
// 		ans = max(ans, dp(x) + 1);
// 	}
// 	return ans;
// }

// int32_t main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

// 	int n, m;
// 	cin >> n >> m;
// 	for (int i = 0; i < m; i++) {
// 		int x, y;
// 		cin >> x >> y;
// 		gr[x].push_back(y);
// 	}

// 	memset(memo, -1, sizeof(memo));

// 	int ans = 0;
// 	for (int i = 1; i <= n; i++) {
// 		ans = max(ans, dp(i));
// 	}

// 	cout << ans;

// 	return 0;
// }