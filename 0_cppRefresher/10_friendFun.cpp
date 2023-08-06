#include<bits/stdc++.h>
using namespace std;


class Complex{
    int a;
    int b;

public:
    void setNumber(int n, int m){
        a = n;
        b = m;
    }
    Complex (){
        
    }

    // argument initialization list
    // Complex (int i, int j): a(i) , b(j)  //works
    // Complex (int i,int j) : a(i*i), b(j*j) //works
    // Complex (int i, int j): a(i), b(a*j) //works
    Complex (int i, int j):  b(j), a(b*j) //won't work will give garbage value as a is defined first above in the class 
     {
        cout<<a<<" "<<b<<endl;
    }
    // Complex (int a, int b){
    //     this->a = a;
    //     this->b = b;
    // }
    void displayNumber(){
        cout<<a<<" + i"<<b<<endl;
    }

    friend Complex sumOfTwo(Complex o1, Complex o2);
    // friend class Calculator;      ///  to make the whole class friend

};

Complex sumOfTwo(Complex o1,Complex o2){
    Complex c ;
    c.a  = o1.a + o2.a;
    c.b = o1.b + o2.b;
    return c;
}



int main(int argc, char const *argv[])
{
    Complex myComp(2,3);

    myComp.displayNumber();
    return 0;

}