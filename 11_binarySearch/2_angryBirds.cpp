#include<bits/stdc++.h>
using namespace std;

bool canPlace(vector<int> vec, int mindis, int n){
    int i =1;
    int j = 0;
    int bCount = 1;
    while(i<vec.size()){
        if(vec[i]-vec[j]>= mindis){
            bCount++;
            j = i;
        }
        i++;
    }

    if(bCount >= n){
        return 1;
    }
    return 0;
}   

int binMinDis(vector<int> vec, int n){
    int l = 0;
    int h = vec[vec.size()-1] - vec[0];
    int ans = l;
    while(h>=l){
        int mid = (h+l)/2;
        bool can = canPlace(vec,mid,n);
        if(can){
            ans = max(ans,mid);
            l = mid+1;
        }
        else{
            h = mid-1;
        }
    }

    return ans;
}

int main(int argc, char const *argv[])
{

    int n = 3;
    vector<int> nests = {1,2,4,8,9};
    int minDis = binMinDis(nests,n);
    cout<<minDis<<endl;
    return 0;

}