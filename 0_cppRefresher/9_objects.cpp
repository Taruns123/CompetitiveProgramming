#include<bits/stdc++.h>
using namespace std;

class Employee{
    int id;
    int salary;

public: 
    void setId(int i){
        salary = 12222;
        id = i;
    }
    void getId(){
        cout<<id<<endl;
    }
};


class complex{
    int a;
    int b;

public:
    void setData(int i, int j){
        a = i;
        b = j;
    }
    void integrateData(complex o1,complex o2){
        a = o1.a+ o2.a;
        b = o1.b+ o2.b;
    }
};

int main(int argc, char const *argv[])
{
    //array of objects;
    Employee facebook[5];
    for (int i = 0; i < 5; i++)
    {
        facebook[i].setId(i+1);
    }

    for (int i = 0; i < 5; i++)
    {
        facebook[i].getId();
    }
    
    
    return 0;

}