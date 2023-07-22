#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;

lli dfs(lli u, lli parent, vector<pair<lli,lli>> adj[], lli& ans,lli n){
    lli currentTreeSize = 1;
    for (auto &&i : adj[u])
    {
        
        lli v = i.first;
        lli wt = i.second;
        if(v == parent){
            continue;
        }
        lli childTreeSize =  dfs(v,u,adj,ans,n);
        currentTreeSize += childTreeSize;
        lli edgeVal = 2*min(childTreeSize, n-childTreeSize)*wt;
        ans+= edgeVal;
    }

    return currentTreeSize;
    


}



int main(int argc, char const *argv[])
{

    lli t,n,u,v,w;

    vector<pair<lli,lli>> adj[100005];
    cin>>t;
    lli tc= 1;
    while (tc<=t)
    {
        cin>>n;
        int N =  n;
        n--;
        for(int i=1; i<=N; i++){
            adj[i].clear();
        }
        while (n--)
        {
            cin>>u>>v>>w;
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }

        lli ans = 0;
        dfs(1,-1,adj,ans,N);
        cout<<"Case #"<<tc<<": "<<ans<<endl;
        
        tc++;
    }
    
    return 0;

}


