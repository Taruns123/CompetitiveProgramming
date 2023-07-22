#include<bits/stdc++.h>
using namespace std;

int binSearch(vector<int> vec,int low ,int high , int key){
    int mid  = (high + low )/2;

    if(low> high){
        return -1;
    }
    if(vec[mid]==key){
        return mid;
    }
    else if(vec[mid]>key){
        return binSearch(vec,low,mid-1,key);
    }
    else if(vec[mid]<key){
         return binSearch(vec,mid+1,high,key);
    }
    return -1;
}



int main(int argc, char const *argv[])
{   

    vector<int> vec  = {1,2,4,40,40,40,40, 40,52,52,52,60};

    cout<<binSearch(vec,0,vec.size()-1,52)<<endl;
    auto lowB = lower_bound(vec.begin(),vec.end(),40);
    auto upB = upper_bound(vec.begin(),vec.end(),40);
    cout<<upB - lowB<<endl;
    cout<<lowB-vec.begin()<<endl;
    cout<<upB-vec.begin()<<endl;
    return 0;

}