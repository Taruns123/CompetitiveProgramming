// https://www.codechef.com/problems/GRAYSC?tab=submissions

// intution of this problem is that according to pigeon hole principle 
// if we consider xor of independent pairs where only one bit is set (as consecutive pairs have only one distinct bit )
// then for the number of pais to be greater than 65 we have only 64 options for 64 bit unsigned integer
// therefore there always exists 2 pairs whose xor has the same bit in common 
// therefore for n>=130 (65*2 for pairs) there always exists a solution 


#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
#define yes "Yes"
#define no "No"
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
    vector<unsigned long long> vec(n);
    for (auto &&i : vec)
    {
        cin>>i;
    }

    if(n>=130){
        cout<<yes<<endl;
        return;
    }
    else{
        
        sort(all(vec));

        for (lli i = 0; i < vec.size(); i++)
        {
            for (lli j = i+1; j < vec.size(); j++)
            {
                for (lli   k = j+1; k < vec.size(); k++)
                {
                    
                    for (lli l = k+1; l < vec.size(); l++) {
                        
                        if(vec[l]== (vec[j]^vec[i]^vec[k])){
                            cout<<yes<<endl;
                            return;
                        }
                    }
                    
                }
                
            }
            
        }
        cout<<no<<endl;

        
        
    }


}

/****************************************************************************************************/



int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    

    run_case();

    return 0;

}