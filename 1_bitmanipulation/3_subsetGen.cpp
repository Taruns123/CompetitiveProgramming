// generating all possible subsets using a mask 
// here mask is created by the generation of 2^n masks of binary representation of numbers
// for n given items

#include<bits/stdc++.h>
using namespace std;

vector<int> eachSet(int mask,vector<int> vec){
    vector<int> res;
    int i =0;
    while (mask>0)
    {

        // if for mask = 2 i.e 000010 we will push only
        // the entity at the second index of vec

        if(mask&1){
            res.push_back(vec[i]);
        }
        mask>>=1;
        i++;
    }

    return res;
    
}

int main(int argc, char const *argv[])
{
    vector<int> vec = {1,2,3,4,6};
    int n = vec.size();
    int total_subsets = pow(2,n);

    vector<vector<int>> answer;

    for (int i = 0; i < total_subsets; i++)
    {
        // here mask is i
        answer.push_back(eachSet(i,vec));
    }
    

    //printing result
    for (auto &&i : answer)
    {
        for (auto &&j : i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
        
    }
    
    
    return 0;

}