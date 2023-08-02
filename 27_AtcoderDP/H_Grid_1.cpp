#include<bits/stdc++.h>
using namespace std;
#define int long long 




/*****************************************************************************************************/
const int N = 1004;
const int Mod = 1e9+7;
int memo[N][N];
int n1,m1;
char grid[N][N];

int dp(char grid[][N], int i, int j ){
    if((i==n1) && (j==m1)){
        return 1;
    }
    if(memo[i][j]!= -1){
        return memo[i][j];
    }
    
    if(grid[i][j]=='#'){
        return (memo[i][j] = 0);
    }

    int ans =0;  
    if(i==n1){
        if(grid[i][j+1]=='.' ) {ans  = (ans%Mod +dp(grid,i,j+1)%Mod)%Mod;}
        return (memo[i][j] = ans);
    }
    else if(j==m1){
        if(grid[i+1][j]=='.' ) {ans  = (ans%Mod +dp(grid,i+1,j)%Mod)%Mod; }
        return (memo[i][j] = ans);
    }
    

    if(grid[i+1][j]=='.' ) {ans  = (ans%Mod +dp(grid,i+1,j)%Mod)%Mod;}
    // cout<<"check"<<endl;
    if(grid[i][j+1]=='.' ) {ans  = (ans%Mod +dp(grid,i,j+1)%Mod)%Mod;}

    return (memo[i][j] = ans);
}


void run_case(){ 

    
    cin>>n1>>m1;
    memset(memo,-1,sizeof(memo));

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            cin>>grid[i][j];
        }
        
    }
    

    n1--;
    m1--;
    cout<<dp(grid,0,0)<<endl;

}

/****************************************************************************************************/



int32_t main(int32_t argc, char const *argv[])
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    

    run_case();

    return 0;

}