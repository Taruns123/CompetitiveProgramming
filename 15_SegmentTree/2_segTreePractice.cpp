#include<bits/stdc++.h>
using namespace std;

struct segmentTree{
    vector<int> st;
    int n;
    void init(int _n){
        this->n = _n;
        st.resize(4*n,0);
    }

    void build(vector<int> v,int start, int end, int nodeIndex){
        if(start==end){
            st[nodeIndex]= v[start];
        }
        int mid = (start+end)/2;

        build(v,start, mid,2*nodeIndex+1);
        build(v,mid+1, end,2*nodeIndex+2);

        st[nodeIndex] = st[2*nodeIndex+1]+st[2*nodeIndex+2];

    }

    void build(vector<int> vec){
        build(vec,0,n-1,0);
    }


    int query(int start ,int end,int l, int r, int node){
        if(start== l && end==r){
            return st[node];
        }

        if(start>r || end<l){
            return 0;
        }
        else {
            
        }

    }
    int query(int l ,int r){
        return query(0, n-1, l, r,0);
    }
};


int main(int argc, char const *argv[])
{

    
    return 0;

}