#include<bits/stdc++.h>
using namespace std;

void genBracket(int n, int i, int j,string s){
    if(i==j && j==n){
    
        cout<<s<<endl;
    
        return;
    }
    if(i<n){
        
        genBracket(n,i+1,j,s+'(');
    }
    if(j<i){
        genBracket(n,i,j+1,s+')');
    }

    return;
    
}

int main(int argc, char const *argv[])
{

    int n;
    cin>>n;
    genBracket(n,0,0,"");
    return 0;

}