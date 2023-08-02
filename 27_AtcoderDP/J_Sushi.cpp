#include<bits/stdc++.h>

#define int long long int
#define ld long double
#define F first
#define S second
#define pb push_back

using namespace std;


const int N = 301;

ld memo[N][N][N];

int n1 ;

ld dp(int zero, int one, int two, int three) {
	// cout << zero << " " << one << " " << two << " " << three << '\n';

	if (one + two + three == 0) return 0;

	ld &ans = memo[one][two][three];
	if (ans != -1.00) return ans;
	ans = n1;
	if (one) ans += one * dp(zero + 1, one - 1, two, three);
	if (two) ans += two * dp(zero, one + 1, two - 1, three);
	if (three) ans += three * dp(zero, one, two + 1, three - 1);
	ans /= (ld)(n1 - zero);
	return ans;
}

int32_t main() {
	
	int n;
	cin >> n;
	vector<int> a(n);
	n1 = n;

	int cnt[4];
	memset(cnt, 0, sizeof(cnt));

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		cnt[a[i]]++;
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < N; k++) {
				memo[i][j][k] = -1.00;
			}
		}
	}

	cout << setprecision(10) << dp(cnt[0], cnt[1], cnt[2], cnt[3])<<endl;



	return 0;
}