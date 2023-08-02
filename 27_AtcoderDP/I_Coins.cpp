#include<bits/stdc++.h>
using namespace std;
#define ld long double


const int N = 3001;
int n;
ld  p[N];

ld memo[N][N];

ld coins(int i, int H, int T){

	if(i==n){
		return 1.00;
	}
	if(memo[i][H]!= -1.00){
		return memo[i][H];
	}
	ld ans = 0.00;


	// if the current coin is head;
	if(H>0) ans += p[i]*coins(i+1,H-1,T);

	// if the current coin is tail;
	if(T>0) ans += (1-p[i])*coins(i+1,H,T-1);

	return memo[i][H] = ans;
}

int main(int argc, char const *argv[])
{

	cin>>n;

	for (int i = 0; i < n; i++)
	{	
		cin>>p[i];
	}

	int minH = n/2+1;

	ld ans = 0.00;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			memo[i][j] = -1.00;
		}
	}
	for (int i = minH; i <= n; i++)
	{
		ans += coins(0,i,n-i);
	}


	cout<<setprecision(10)<<ans<<endl;
	
	
	

	return 0;

}
