#include <bits/stdc++.h>

using namespace std;

// given starting and end time of activities what is the most number of possible activities 
// the person can do

/// solution : sort the activity with least end time

bool cmp(pair<int,int> a,pair<int,int> b){

    return a.second < b.second;

}



int main (){

    int n;cin >> n;

    vector<pair<int,int>>vp(n);

    for(int i = 0;i < n;i ++){

        cin >> vp[i].first;

    }

    for(int i = 0;i < n;i ++){

        cin >> vp[i].second;

    }

    sort(vp.begin(), vp.end(),cmp);

    int cnt  =0;

    int r = vp[0].second;

    for(int i = 1;i < n;i ++){

        if(vp[i].first >= r){

            cnt ++;

            r = vp[i].second;

        }

    }

    cout << cnt << '\n';



    return 0;

}