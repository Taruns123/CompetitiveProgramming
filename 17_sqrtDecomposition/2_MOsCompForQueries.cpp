#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;

int a[N];
struct query{
    int l, r,block,id,ans;

    bool operator<(query P) const{
        return make_pair(this->block,r)<make_pair(P.block,P.r);
    }
}q[N];

int main(int argc, char const *argv[])
{
    int n, m,queries;
    cin>>n;
    m = sqrt(n);

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    cin>>queries;
    for (int i = 0; i < queries; i++)
    {
        cin>>q[i].l>>q[i].r;
        q[i].l--, q[i].r--;
        q[i].id = i; q[i].block = q[i].l/m;
    }
    

    sort(q,q+queries);

    for (int i = 0; i < queries; i++)
    {
        cout<<q[i].id<<q[i].l<<" "<<q[i].r<<endl;
    }
    
    

    
    return 0;

}