#include<bits/stdc++.h>
using namespace std;

inline int product(int a, int b){
    return a*b;
}

int main(int argc, char const *argv[])
{

    int a = 3, b = 4;
    cout<<product(a,b)<<endl; // inline function will not call the function product when called rather
                              // the function defines the working here itself in the compiletime saving some run time

     
    return 0;

}