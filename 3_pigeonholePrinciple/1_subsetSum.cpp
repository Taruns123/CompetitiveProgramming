// https://www.codechef.com/problems/DIVSUBS
// NOTE : the approach of prefix sum and then remainder would work in this case 
// as the size of the array is always equal to n 
// hence the number of possiblity for remainder are n-1
// and hence there is atleast a remainder which exists twice
// but incase the array size is less than n there may be a case where it doesn't work

#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
#define yes "YES"
#define no "NO"
#define all(x)   (x).begin(),(x).end()
#define pb push_back
#define mp make_pair
typedef vector<int> vi;
typedef vector<long long int> vlli;
typedef long long lli;
typedef vector<pair<int,int>> vpii;
typedef pair<int,int> pii;
typedef pair<int,char> pic;
typedef pair<char,int> pci;



/*****************************************************************************************************/

void run_case(){ 

    lli n;
    cin>>n;
    vlli vec(n);
    for (auto &&i : vec)
    {
        cin>>i;
    }
    
    lli sum =0;
    for (auto &&i : vec) {
        sum+=i;
        i = sum;
    }
    //   cout<<"arr"<<nline;
    // for (auto i : vec) {
    //     cout<<i<<" ";
    // }
    // cout<<nline;
    for (auto &&i : vec)
    {
        i%=n;
    }
    
    
   

    
    
    vector<pair<lli,lli>> ans(n,{-1,-1});
    for (lli i = 0; i < n; i++) {
        if(ans[vec[i]].first ==-1){
            ans[vec[i]].first = i;
        }
        else if(ans[vec[i]].second ==-1){
            ans[vec[i]].second = i;
        }
    }
    
    if(ans[0].first!= -1){
        cout<<ans[0].first+1<<nline;
        
        for (int i = 1; i <= ans[0].first+1; i++) {
            cout<<i<<' ';
        }
        cout<<nline;
        return;
    }
    
    for (auto &&i : ans) {
        
        if(i.second!=-1){
            cout<<i.second-i.first<<nline;
            
            for (lli k = i.first+2; k <= i.second+1; k++) {
                cout<<k<<" ";
            }
            cout<<nline;
            return;
        }
        
    }
    
    cout<<"-1"<<nline;
    return;
        

    
    

}

/*****************************************************************************************************/



int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    int t; cin>>t;
    while(t--){

        run_case();

    }
    return 0;

}