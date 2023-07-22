//this theorem justifies a^p = a (mod p)
// therefore we can find the answer of (a/b)mod p 
// which can also be writen as (a* (b)^-1)mod p 
// by fermats theorem ==> (a%p * (b^(p-2)%p))%p for mod  of division

#include<bits/stdc++.h>
using namespace std;

const int mod = 7;

int fact[100005];

int mulMod(int a, int b){
    return (a%mod * b%mod)%mod;
} 

void factMod(){
    
    fact[0] = 1;
    for (int i = 1; i <= 100005; i++)
    {
        fact[i] = mulMod(fact[i-1],i);
    }
    
}

int powr(int a, int b){
    int res = 1;

    while(b>0){
        if(b&1){
            res = mulMod(res,a);
        }
        a = mulMod(a,a);
        b>>=1;
    }
    return res;
}

int inv(int a){
    return powr(a,mod-2);
}
int divMod(int a , int b){
    cout<<pow(b,mod-2)<<endl;
    return mulMod(a,inv(b));
}

int nCr(int n, int r){
    return (mulMod(fact[n], inv(mulMod(fact[r],fact[n-r]))));
}


int main(int argc, char const *argv[])
{

    cout<<divMod(4,2)<<endl;
    factMod();
    cout<<nCr(5,2)<<endl;
    return 0;

}