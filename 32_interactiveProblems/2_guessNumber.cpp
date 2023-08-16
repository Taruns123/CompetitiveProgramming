#include<bits/stdc++.h>
using namespace std;


int query(int middle){
    cout<<middle<<endl;
    string in;
    cin>>in;
    return (in==">=");
}
int main(int argc, char const *argv[])
{

    int left =1, right = 1e6;
    int ans =0 ;
     while(left <= right){
        int middle = (left+right)/2;

        if(query(middle)){
            ans = middle;
            left = middle+1;
        }
        else{
            right = middle -1;
        }
     }

     cout<<"! "<<ans<<endl;
    return 0;

}