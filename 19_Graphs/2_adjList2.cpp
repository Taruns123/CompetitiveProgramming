#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    string name;
    list<string> nbrs;  //neighbours
    Node(string name){
        this->name = name;
    }

};

class Graph{

public:
    unordered_map<string,Node*> m;

    Graph(vector<string> cities){
        for (auto &&city : cities)
        {
            m[city] = new Node(city);
        }
        
    }

    void addEdge(string a, string b, bool undir=false){
        m[a]->nbrs.push_back(b);
        if(undir){
            m[b]->nbrs.push_back(a);
        }
    }

    void printAdjList(){
        for (auto &&cityPair : m)
        {
            auto city = cityPair.first;
            cout<<city<<" --> ";
            Node *node  = cityPair.second;
            for (auto &&i : node->nbrs)
            {
                cout<<i<<" ";
            }
            cout<<endl;
            
        }
        
    }

};





int main(int argc, char const *argv[])
{

    //adj list to map with the string names 
    // example : that of with city names

    vector<string> cityNames = {"Delhi","London","Paris","Mumbai"};
    Graph cityGraph(cityNames);
    cityGraph.addEdge("Delhi","London");
    cityGraph.addEdge("Delhi","Mumbai");
    cityGraph.addEdge("Delhi","Paris");
    cityGraph.addEdge("Mumbai","Paris");
    cityGraph.addEdge("Mumbai","London");
    cityGraph.addEdge("Paris","London");

    cityGraph.printAdjList();


    

    return 0;

}