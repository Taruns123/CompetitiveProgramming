#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{

    string str = "abaaabaaba";
    string pattern = "aba";
    int n = str.size();
    int m = pattern.size();

    cout<<n<<" "<<m<<endl;

    for (int i = 0; i <= n-m; i++)
    {
        if(str.substr(i,m)==pattern){
            cout<<i<<endl;
        }
    }
    
    return 0;

}