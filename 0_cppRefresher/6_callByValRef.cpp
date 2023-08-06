#include<bits/stdc++.h>
using namespace std;

int sum(int a, int b){
    return a+b;
}

// this will not swap
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

// call by reference using pointers
void swapPointer(int * a, int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// call by reference using reference variable
int& swapRefVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    return a;
}


void changeArr(int arr[]){
    for (int i = 0; i < 4; i++)
    {
        arr[i]++;
    }
    
    
}

int & swapReferenceVar(int &a, int& b){
    int temp = a;
    a = b;
    b = temp;
    return a;
}

int z = 4;

int main(int argc, char const *argv[])
{


    int x,y,z;
    x = 3;
    y = 2;
    z= x-y;
    // :: is scope resolution operator for using global variables
    cout<<z<<" "<<::z<<endl; 

    float d = 34.4f;
    long double e = 34.4;
    cout<<sizeof(34.4)<<endl;
    cout<<sizeof(34.4f)<<endl;
    cout<<sizeof(34.4F)<<endl; // f and F are same both capital and smallcase can be used;
    cout<<sizeof(34.4l)<<endl; // long double
    cout<<sizeof(34.4L)<<endl;

    cout<<d<<" "<<e<<endl;

    // reference variable
    // if we want to create two different variables refering to the same we use reference variable
    float r1 = 455;  
    float &r2 = r1;
    r1++;
    cout<<"r2 "<<r2<<endl;

    // typecasting
    float c1 = 45.5;
    cout<<(int)c1<<endl;
    cout<<int(c1)<<endl;// both declaration of typecasting are same

    
    
    
    //passing by value and reference
    int a = 4, b= 5; 
    cout<<sum(a,b)<<endl;
    swap(a,b);
    swapPointer(&a,&b);
    cout<<a<<b<<endl;
    swapRefVar(a,b) = 444;
    cout<<a<<b<<endl;


    int arr[] = {14,2,2,3,4};
    // arrays are always sent by reference in this type 
    changeArr(arr);
    for (auto &&i : arr)
    {
        cout<<i<<endl;
    }
    int x1= 32;
    int y1 = 42;
    
    swapReferenceVar(x1,y1) = 766; // since this function returns the reference to x1 ;
    cout<<x1<<endl;

    return 0;

}