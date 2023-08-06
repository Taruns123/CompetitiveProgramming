#include<bits/stdc++.h>
using namespace std;

class Complex{
    int real;
    int imaginary;

public :
    void setData(int r, int i){
        real = r;
        imaginary = i;
    }
    void getData(){
        cout<<real<<" "<<imaginary<<endl;
    }
};


int main(int argc, char const *argv[])
{

    // int* p = new int(4);
    float* p = new float(4.3);
    int *ptr = new int(300);


    int* arr = new int[5];
    
    arr[0] = 12;
    arr[1] = 32;
    arr[2] = 52;
    arr[3] = 62;
    arr[4] = 12;
    delete ptr;// the memory reserved is freed for other use of other purposes you may not find the same data
    delete[] arr;

    int *brr = new int[4];
    brr[0] = 124;
    // brr[1] = 33;
    *(brr+1) = 44;
    brr[2] = 33;
    brr[3] = 33;
    for (int i=0 ; i<5; i++)
    {
        cout<<arr[i]<<endl;
    }
    for (int i=0 ; i<4; i++)
    {
        cout<<brr[i]<<endl;
    }
    
    Complex c1;
    Complex* pt = &c1;
    (*pt).setData(15,4);
    (*pt).getData();

    Complex* comp = new Complex();
    comp->setData(12,3);
    comp->getData();

    Complex* comPtr = new Complex[4];
    comPtr->setData(12,2);
    (comPtr+1)->setData(2,12);
    (comPtr+2)->setData(3,12);
    (comPtr+3)->setData(3,42);

    for (int i = 0; i < 4; i++)
    {
        (comPtr+i)->getData();
    }
    

    cout<<*p<<endl;
    return 0;

}