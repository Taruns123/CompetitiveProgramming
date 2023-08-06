#include<bits/stdc++.h>
using namespace std;



int main(int argc, char const *argv[])
{

    int arr[5];
    arr[0] =1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;



    // pointers and arrays

    int * pArr = arr;
    cout<<pArr<<endl;
    cout<<*pArr<<endl;
    pArr++;
    cout<<*pArr<<endl;
    pArr+=1;
    cout<<*pArr<<endl; 

    
    return 0;

}