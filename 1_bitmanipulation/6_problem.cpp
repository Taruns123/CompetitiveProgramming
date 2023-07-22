// Triples with Bitwise AND Equal To Zero
// Given an integer array nums, return the number of AND triples.
// An AND triple is a triple of indices (i, j, k) such that:
// 0 <= i < nums.length
// 0 <= j < nums.length
// 0 <= k < nums.length
// nums[i] & nums[j] & nums[k] == 0, where & represents the bitwise-AND operator.

// Constraints:
// 1 <= nums.length <= 1000
// 0 <= nums[i] < 2^16
// Example :
// Input: nums = [2,1,3]
// Output: 12
// Explanation: We could choose the following i, j, k triples:
// (i=0, j=0, k=1) : 2 & 2 & 1=0
// (i=0, j=1, k=0) : 2 & 1 & 2=0
// .........................so on 

#include<bits/stdc++.h>
using namespace std;


int checkTriplet(string s){
    // checking if each subset is a triplet
    if((((int)s[0] - 48)&((int)s[1] - 48))&((int)s[2] - 48)){
        return 0;
    }
    return 1;
}

int Subset(vector<int> s){

    // inshort generating subsets of size 3;
    int finAns =0;
    int val  = 2<<s.size();
    int i =0;
    while (i<=val)
    {
        int c = i;
        int pos  =0;
        string FString = "";
        while (c>0)
        {
            if(c&1){
                FString+= (char)(s[pos]);
            }
            pos++;
            c>>=1;
        }
        if(FString.length()==3){
            if(checkTriplet(FString)){
                finAns++;
            }
        }
        
        i++;
        
        
    }
    
    return finAns*6;
    
}

int countTriplets(vector<int> nums) {
    return Subset(nums);
}