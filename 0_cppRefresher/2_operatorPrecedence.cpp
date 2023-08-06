#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{

    // manipulator : manipulates the display of data
    int a = 4;
    int b = 43434;
    float c = 4.56;
    cout<<a<<endl;        // endl is also a manipulator
    
    cout<<setw(4)<<a<<endl; //sets width before the next output i.e it right aligns the output 
    cout<<setw(4)<<b<<endl; //sets width before the next output

    cout<<setprecision(12)<<(2/3.0f)<<endl;
    cout<<setprecision(12)<<(3/2.0f)<<endl;
    cout.precision(4);    //can use;
    cout<<12.23211<<endl;
    cout<<setprecision(12)<<fixed<<c<<endl; //it adds zeros if a no preceding decimals to make a fixed lenght of decimal precision
    cout<<true<<endl;

    cout<<boolalpha<<true<<endl;       //by default true is printed as 1 and false as 0 bool alpha converts them into true or false in output
    cout<<true<<endl;
    
    // operator precedence
    // https://en.cppreference.com/w/cpp/language/operator_precedence
    // * / % have same precedence higher than + -
    cout<<2*4+3*2<<endl;   // first multiplication happens then addition
    cout<<4*3+6/3<<endl;    // since * and / have same precison the one on left will execute first as in this case *


    return 0;

}