// this code is about dfs tree i.e the tree formed by removing the backedges in a 
// cyclic graph. The method of finding the backedges is through dfs if we come across an edge
// that takes us back to a visited node it is a backedge.

#include<bits/stdc++.h>
using namespace std;


const int N = 1e5;
vector<int> gr[N];

bool cycle = false;
int vis[N];
void dfs(int curr,int parent){
    cout<<curr<<endl;
    vis[curr] = 1;
    for (auto &&i : gr[curr])
    {
        if(!vis[i]){
            dfs(i,curr);
        }
        else if(i!=parent){
            // to detect and print backedges
            cout<<i<<" "<<curr<<endl;
            // also to detect cycle
            cycle = true;
        }
    }
    
}

int main(int argc, char const *argv[])
{
    int n,m;
    cin>>n>>m;
    int x,y;
    for (int i = 0; i < m; i++)
    {
        cin>>x>>y;
        gr[x].push_back(y);
        gr[y].push_back(x);
    }

    for (int i = 1; i <=n; i++)
    {
        if(!vis[i]){
            dfs(i,0);
        }
    }

    // 7 8 
    // 1 3
    // 1 2
    // 2 3 
    // 2 4
    // 4 5
    // 5 6
    // 6 7
    // 7 4
    
    
    
    return 0;

}