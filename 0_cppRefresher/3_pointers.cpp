#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{

    // pointer is a data type that stores address of other data types
    int a = 4;
    int* b= &a;   // b just is storing the address of a;
                  // b is a pointer of type int

    int** c = &b; //is a pointer of type pointer
    int*** d = &c;//is a pointer of type pointer to pointer 😂
    // & gives address of operator
    // * dereference operator
    cout<<&a<<endl;//address of a
    cout<<b<<endl;// address of a
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<***d<<endl;

    cout<<*b<<endl; //*(address) derefernce operator i.e = valueAt(address)
    cout<<*(&a)<<endl;
    return 0;

}