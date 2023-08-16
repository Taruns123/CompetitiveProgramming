#include<bits/stdc++.h>
using namespace std;

class Vector3{
    int x,y,z;

public: 
    // Vector3(){};
    Vector3(int a, int b, int c): x(a),y(b),z(c){
        cout<<x<<y<<z<<endl;
    }

};

int main(int argc, char const *argv[])
{

    Vector3* vecPtr = new Vector3(1,3,4);

    return 0;

}