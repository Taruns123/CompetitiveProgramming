#include<bits/stdc++.h>
using namespace std;

class Shop{
    int id;
    int price;
public:
    Shop* setData(int id,int price){
        this->id = id;
        this->price = price;
        return this;
        // this refers to a pointer that points to this object
    }
    void getData(){ 
        cout<<id<<" "<<price<<endl;
    }
};

int main(int argc, char const *argv[])
{
    Shop s;
    s.setData(12,35)->getData();

    
    return 0;

}