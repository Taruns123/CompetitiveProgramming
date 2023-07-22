// important
#include<bits/stdc++.h>
using namespace std;

int tsp(vector<vector<int>> dist,int setOfCities,int curr_city , int n ,vector<vector<int>>& dp){
    
    if(setOfCities == (1<<n)-1){
        return dist[curr_city][0];
    }

    if(dp[setOfCities][curr_city]!=-1){
        return dp[setOfCities][curr_city];
    }


    int ans = INT_MAX;
    for (int choice = 0; choice < n; choice++)
    {
        //now lets check if the city is already visited
        if((setOfCities & (1<<choice)) ==0){
            int subprob = dist[curr_city][choice] + tsp(dist,setOfCities|(1<<choice),choice,n,dp);
            ans = min(ans,subprob);
        }
    }   
    dp[setOfCities][curr_city] = ans ;
    return ans;
}

int main(int argc, char const *argv[])
{

    vector<vector<int>> dist = {
        {0,20,42,25},
        {20,0,30,34},
        {42,30,0,10},
        {25,34,10,0},
    };
    int n  = dist.size();
    vector<vector<int>> dp(1<<n, vector<int>(n,-1));

    
    cout<<tsp(dist,1,0,n,dp)<<endl;
    for (auto &&i : dp)
    {
        for (auto &&j : i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
        
    }
    return 0;

}