#include<bits/stdc++.h>
using namespace std;


class Complex;

class Calculator{
    public: 
    void sumRealComplex(Complex o1, Complex o2);
};


class Complex{
    int a;
    int b;

public:
    void setNumber(int n, int m){
        a = n;
        b = m;
    }
    void displayNumber(){
        cout<<a<<" + i"<<b<<endl;
    }

    friend void Calculator:: sumRealComplex(Complex o1, Complex o2);
    
};

void Calculator :: sumRealComplex(Complex o1, Complex o2){
    cout<<o1.a+o2.a<<endl;
}

int main(int argc, char const *argv[])
{
    
    
    return 0;

}