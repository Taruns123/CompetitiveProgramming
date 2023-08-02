#include<bits/stdc++.h>
using namespace std;

#define int long long int

const int N = 3005;
string a,b;
int dp[N][N];
int al, bl;
int give_lcs(int i, int j) {
	if (i == al || bl == j) return 0;

	int &ans = dp[i][j];

	if (ans != -1) return ans;

	if (a[i] == b[j]) ans = give_lcs(i + 1, j + 1) + 1;
	else ans = max(give_lcs(i + 1, j), give_lcs(i, j + 1));

	return ans;
}

string res = "";

// void traceback(string a, string b, int i, int j){
//      if(i==a.length() || j== b.length()){
//         return;
//     }
//     // if equal we will just add the char in res
//     if(a[i]==b[j]) res+= a[i], traceback(a,b,i+1, j+1);
//     //the below conditon check checks if the current lcs value is comming from when we do i+1 or j+1 ;
//     else if(give_lcs(a,b,i+1,j)==give_lcs(a,b,i,j)) traceback(a,b,i+1,j);
//     else traceback(a,b,i,j+1);
// }
void trace_back(int i, int j) {
	if (i == al || j == bl) return;

	if (a[i] == b[j]) res += a[i], trace_back(i + 1, j + 1);
	else {
		if (give_lcs(i + 1, j) == give_lcs(i, j)) trace_back(i + 1, j);
		else trace_back(i, j + 1);
	}
}


/*****************************************************************************************************/

void run_case(){ 

    cin>>a>>b;
    al = a.length();
    bl = b.length();
    memset(dp,-1,sizeof(dp));
    int l = give_lcs(0,0);
    trace_back(0,0);
    cout<<res<<'\n';


}

/****************************************************************************************************/



int32_t main(int32_t argc, char const *argv[])
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    

    run_case();

    return 0;

}


// #include<bits/stdc++.h>

// #define int long long int
// #define pb push_back

// using namespace std;

// const int N = 3000;

// string s, t, res;
// int n, m, memo[N][N];

// int give_lcs(int i, int j) {
// 	if (i == n || j == m) return 0;

// 	int &ans = memo[i][j];

// 	if (ans != -1) return ans;

// 	if (s[i] == t[j]) ans = give_lcs(i + 1, j + 1) + 1;
// 	else ans = max(give_lcs(i + 1, j), give_lcs(i, j + 1));

// 	return ans;
// }

// void trace_back(int i, int j) {
// 	if (i == n || j == m) return;

// 	if (s[i] == t[j]) res += s[i], trace_back(i + 1, j + 1);
// 	else {
// 		if (give_lcs(i + 1, j) == give_lcs(i, j)) trace_back(i + 1, j);
// 		else trace_back(i, j + 1);
// 	}
// }

// int32_t main() {
// 	cin >> s >> t;
// 	n = s.size();
// 	m = t.size();

// 	memset(memo, -1, sizeof(memo));

// 	int l = give_lcs(0, 0);

// 	trace_back(0, 0);

// 	cout << res;

// 	return 0;
// }