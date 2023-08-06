#include<bits/stdc++.h>
using namespace std;

class Employee{
    static int count; //default value is 0;
private:
    int i;
    int j;
public: 
    void setData(int a, int b){
        i = a;
        j = b;
    };
private: 
    int k;
    int l;
public:
    void setkData(int c, int d){
        k = c;
        l = d;
    }
    void setDataAll(int a, int b,int c, int d);
    void getDatak();
    void getData();
    void getDataAll();
    void getCount();
    static void getCounter();
};


int Employee:: count = 1; // declaring a static variable that is for the class and not for the object
                        // changing the default value of count from 0 to 1;
void Employee:: getCounter(){
    // cout<<i<<endl; static functios cannot access non static variables
    cout<<"static function called : ";
    cout<<count<<endl;
}

void Employee:: getCount(){
    cout<<"this is not a static function : ";
    cout<<count<<endl;
}

void Employee:: setDataAll(int a, int b , int c, int d){
    count++;
    setData(a,b);
    setkData(c,d);
}

void Employee :: getDatak(){
    cout<<k<<" "<<l<<endl;
}
void Employee :: getData(){
    cout<<i<<" "<<j<<endl;
}
void Employee :: getDataAll(){
    getData();
    getDatak();
}

int main(int argc, char const *argv[])
{

    Employee emp;
    emp.setDataAll(1,2,3,4);
    emp.getDataAll();
    emp.getCount();
    Employee::getCounter(); // calling static function
    Employee emp2;
    emp2.setDataAll(1,2,3,4);
    emp2.getDataAll();
    emp2.getCount();
    Employee::getCounter(); // calling static function

    Employee emp3;
    emp3.setDataAll(1,2,3,4);
    emp3.getDataAll();
    emp3.getCount();
    Employee::getCounter(); // calling static function
    return 0;

}