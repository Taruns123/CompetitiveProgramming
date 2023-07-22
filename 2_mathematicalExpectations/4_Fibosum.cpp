// if F(n) = F(n-1)+F(n-2);
// Fibosum S(n) = F(n)+ F(n-1)+ F(n-2)+..............F(0);
// To wap to find the sum in range m-n i.e S(n)-S(m-1);


#include<bits/stdc++.h>
using namespace std;

const int sz = 3;
const int mod = 1e9+7;

struct Mat{
    int m[sz][sz];

    Mat(){
        memset(m,0,sizeof(m));
    }
    void Identity(){
        for (int i = 0; i < sz; i++)
        {
            m[i][i] = 1;
        }
        
    }

    Mat operator* (Mat a){
        Mat res;
        for (int i = 0; i < sz; i++)
        {
            for (int j = 0; j < sz; j++)
            {
                for (int k = 0; k < sz; k++)
                {
                    res.m[i][j]+= m[i][k]*a.m[k][j];
                    res.m[i][j] %= mod;
                }
            }
        }
        return res;
    }
};

int FiboSum(int n){


    if(n==0) return 0;
    if(n==-1) return 0;
    if(n==1) return 1;
    Mat T;
    T.m[0][0] = T.m[0][1]  = T.m[0][2] = 1;
    T.m[1][1] = T.m[1][2] = T.m[2][1] = 1;

    Mat res;
    res.Identity();

    int x = n-1;
    while (x>0)
    {
        if(x&1){
            res= res *T;
        }

        T = T*T;
        x>>=1;

    }

    // res is T^(n-2) therefore answer =  res*F[2] , i.e.
    return (res.m[0][0] + res.m[0][1])%mod;
}

int main(int argc, char const *argv[])
{

    int n = 19;
    int m = 10;
    cout<<(FiboSum(n)-FiboSum(m-1) + mod)%mod<<endl;

    // +mod is added when subtracting so that the number doesn't get negative
    //       and we know that adding mod will not make difference as % mod will neglect it
    return 0;

}