#include<bits/stdc++.h>
using namespace std;

const int c = 1e9+7;

int binaryMul(int a, int b){
    int result = 0;
    while (b>0)
    {
        if(b&1){
            result+=a;
            result%=c;
        }
        a+=a;
        a%=c;
        b>>=1;
        
    }
    return result;
}

int main(int argc, char const *argv[])
{
    cout<<binaryMul(3,6)<<endl;
    
    return 0;

}