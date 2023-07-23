#include<bits/stdc++.h>

using namespace std;

class Graph{
     
    int V;
    list<int> * l;
    
public:
    Graph(int v){
        V = v;
        l = new list<int>[V];
    }

    void addEdge(int a, int b, bool undir =true){
        l[a].push_back(b);
        if(undir){
            l[b].push_back(a);
        }
    }

    void printAdjList(){
        for (int i = 0; i < V; i++)
        {
            cout<<i<<" --> ";
            for(auto &&node : l[i]){
                cout<<node<<" ";
            }
            cout<<endl;
        }
        
    }
};


int main(int argc, char const *argv[])
{

    Graph g(6);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(0,3);
    g.addEdge(4,3);
    g.addEdge(5,4);
    g.addEdge(1,3);

    g.printAdjList();
    return 0;

}