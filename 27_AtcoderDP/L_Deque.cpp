#include<bits/stdc++.h>
using namespace std;
#define all(x)   (x).begin(),(x).end()
#define int long long int


const int I=3010,J=3010,T=2;
const int outRange = 1e18;

/*****************************************************************************************************/
const int N = 3005;
int n;
int deq[N];
int memo[I][J][T];

int dp( int i , int j , int turn){
    if(i>j){return 0;}
    if(i==j && turn==0){return deq[i];}
    if(i==j && turn==1){return 0;}

    if(memo[i][j][turn]!= -1){
        return memo[i][j][turn];
    }

    else if(turn==0){
        return memo[i][j][turn] =  max(deq[i]+0ll+dp(i+1,j,1),0ll+deq[j]+dp(i,j-1,1));
    }
    return memo[i][j][turn] =  min(dp(i+1,j,0),dp(i,j-1,0));

}

void run_case(){ 

    cin>>n;
    int sum = 0;
    for (int i=0; i<n; i++)
    {
        cin>>deq[i];
        sum+= deq[i];
    }

    // int this case it is possible to have a value of -1 so lets set memo to something out of the range;
    memset(memo,-1,sizeof(memo));
    
    
    int i = 0 ;  
    int j = n-1;

    int turn = 0;
    int X = dp(i,j,turn);
    
    int Y = sum - X;
    cout<<X-Y<<endl;
    


}

/****************************************************************************************************/



int32_t main(int32_t argc, char const *argv[])
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    

    run_case();

    return 0;

}