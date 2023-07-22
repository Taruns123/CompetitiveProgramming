// all numbers are tripples except one (3N+1)
// example 3 3 3 5 5 5 2

// note : always covert from binary to decimal using right shift and or operator rather than
//        multiplying it with powers of 2 to avoid mistakes in negative number.

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{

    int answer = 0;
    vector<int> arr  = {3,3,3,5,-4,-4,-4};
    vector<int> vec(32);

    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            vec[i]+= (arr[j]>>i &1);
        }
        
    }


    
    for (int i = 0; i < vec.size(); i++)
    {
        answer|= (vec[i]%3)<<i;
    }
    
    cout<<answer<<endl;
    
    return 0;

}