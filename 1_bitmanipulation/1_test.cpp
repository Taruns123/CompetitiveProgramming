#include<bits/stdc++.h>
using namespace std;

void printBit(int n){
    int x = 31;
    
    while(x>=0){
        if(n>>x &1){
            cout<<1;
        }
        else{
            cout<<0;
        }
        x--;
    }
    cout<<endl;
}

int main(int argc, char const *argv[])
{

    cout<<(~(-7)+1)<<endl;
    int a, b; 
    a = 23;
    b = 32;
    
    int x= 199;
    // int y = ~(x-1);
    int y = -x;
    int z = x& y;
    
    printBit(x);
    printBit(y);
    printBit(z);
    return 0;


}