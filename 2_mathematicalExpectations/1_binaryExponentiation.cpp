#include<bits/stdc++.h>
using namespace std;


const int mod = 1e9+7; 

int powerr(int a, int b){      //to calculate a^b
    
    int result = 1;
    
    while(b>0){
        result *= a;  result%=mod;
        a*=a;         a%=mod;
        b>>=1;
    }
    return result;
}
int main(int argc, char const *argv[])
{
    cout<<powerr(2,2)<<endl;
    
    return 0;

}