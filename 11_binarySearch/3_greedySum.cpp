#include<bits/stdc++.h>
using namespace std;

bool isPos(vector<int> vec, int k , int minSum){

    int minAns = INT_MAX;
    int curr =0;
    int sec = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        curr += vec[i];
        if(curr>= minSum){
            sec++;
            curr = 0;
        }
    }
    if(sec>=k){
        return true;
    }
    
    return false;
}

int greedSum(vector<int> vec, int k){

    int low = 0;
    int high = accumulate(vec.begin(),vec.end(),0);

    int ans = low;
    while (high>=low)
    {
        int mid= (high+low)/2;
        int pos = isPos(vec,k,mid);
        if(pos){
            ans = max(ans,mid);
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }

    return ans;
    
}

int main(int argc, char const *argv[])
{

    vector<int> coins = {10,22,30,40};
    int k = 3;

    int ans = greedSum(coins,k);
    cout<<ans<<endl;
    
    return 0;

}