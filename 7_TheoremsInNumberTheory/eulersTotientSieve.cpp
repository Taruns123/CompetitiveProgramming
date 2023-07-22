#include<bits/stdc++.h>
using namespace std;

const int N= 1005;
vector<bool> primes(N,true) ;
vector<int> tot(N);

void eulersTotient(){
    for (int i = 2; i < N; i++)
    {
        if(primes[i]){
            
        for (int j = i*i; j < N; j+=i)
        {
            primes[j] = false;
        }
        }
        
    }

    for (int i = 0; i < 100; i++)
    {
        if(primes[i]){
            cout<<i<<" ";
        }
    }
    
     cout<<endl;
    iota(tot.begin(),tot.end(),0);

    for (int i = 2; i < N; i++)
    {

        if(primes[i]){ 
        for (int j = i; j < N; j+=i)
        {
            tot[j] *= (i-1);
            tot[j]/= i;
        }
        }
        
    }
    for (int i = 1; i < 20; i++)
    {
        cout<<i<<" "<<tot[i]<<endl;
    }
    
}

int main(int argc, char const *argv[])
{

    eulersTotient();
    return 0;

}