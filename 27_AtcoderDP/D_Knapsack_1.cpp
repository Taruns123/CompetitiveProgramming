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
// vector<vlli> dp(200,vlli(1e5+10,-1));
const lli N = 1e5+10;
lli dp[200][N];
lli knapsack(vector<pair<lli,lli>> sack, int i,int W,int w){
    if(i==sack.size()){
        return 0;
    }

    if(dp[i][w]!=-1){
        return dp[i][w];
    }
    
    // not taken
    lli notTaken = knapsack(sack,i+1,W,w);
    // taken
    lli taken = 0;
    if(w+sack[i].first<=W){  
        taken= sack[i].second + knapsack(sack,i+1,W,w+sack[i].first);
    } 
    return dp[i][w] = max(taken,notTaken);
}
void run_case(){ 

    lli n,w;
    cin>>n>>w;
    vector<pair<lli,lli>> sack(n);
	memset(dp, -1, sizeof(dp));

    for (auto &&i : sack)
    {
        cin>>i.first>>i.second;
    }

    
    
    
    cout<<knapsack(sack,0,w,0)<<endl;


}

/****************************************************************************************************/



int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    

    run_case();

    return 0;

}


// #include<bits/stdc++.h>

// #define int long long int
// #define F first
// #define S second
// #define pb push_back

// using namespace std;

// const int N = 100;

// int v[N], w[N], W, n, memo[N][100001];

// // it returns the maximum value total value
// int knapsack(int index, int weight) {
// 	if (index >= n) return 0;

// 	// memoissatioon part
// 	int &ans = memo[index][weight];
// 	if (ans != -1) return ans;

// 	// do not take the item
// 	ans = knapsack(index + 1, weight);
// 	// take the item at index
// 	if (w[index] + weight <= W) {
// 		ans = max(ans, v[index] + knapsack(index + 1, w[index] + weight));
// 	}
// 	return ans;
// }

// int32_t main() {

// 	cin >> n >> W;

// 	for (int i = 0; i < n; i++) {
// 		cin >> w[i] >> v[i];
// 	}

// 	memset(memo, -1, sizeof(memo));

// 	cout << knapsack(0, 0);

// 	return 0;
// }