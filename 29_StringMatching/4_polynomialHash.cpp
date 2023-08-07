#include<bits/stdc++.h>
using namespace std;
#define int long long int

int poly_hash(string s){
    int hash =0 , p=31 , mod = 1e9+7;
    int p_power = 1;
    for (int i = 0; i < s.length(); i++)
    {
        hash+= (s[i]- 'a'+1)* p_power;
        p_power *= p;

        hash%= mod;
        p_power%= mod;
    }
    return hash;
    
}

int32_t main(int32_t argc, char const *argv[])
{
    string s = "abcds";
    cout<<poly_hash(s)<<endl;
    
    return 0;

}