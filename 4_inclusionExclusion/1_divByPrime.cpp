#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{

    int n ;
    cin>>n;

    vector<int> primes = {2,3,5,7,11,13,17,19,23,29};
    int m = 1<<primes.size();
    int ans =0;

    for (int i = 1; i < m; i++)
    {
        int lcm = 1;
        for (int j = 0; j < primes.size(); j++)
        {
            // if((i>>j) &1) cout<<primes[j]<<" ";
            if((i>>j) &1) lcm*=primes[j];
        }
        if(__builtin_popcount(i)%2){
            ans+= (n/lcm);
        }
        else{
            ans-= (n/lcm);
        }
        
    }

    cout<<ans<<endl;
    
    return 0;

}