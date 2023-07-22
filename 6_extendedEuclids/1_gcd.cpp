#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b%a==0){
        return a;

    }
    else{
        return gcd(b%a,a);
    }
}
int main(int argc, char const *argv[])
{

    cout<<gcd(12,24)<<endl;
    return 0;

}