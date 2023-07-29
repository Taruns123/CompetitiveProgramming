#include<bits/stdc++.h>
using namespace std;

bool comp(vector<int> b1, vector<int> b2){
    return b1[2]<b2[2];
}
bool CanPlace(vector<int> box1 , vector<int> box2){
    for (int i = 0; i < 3; i++)
    {
        if(box1[i]<box2[i]){
            return false;
        }
    }
    return true;
    
}
int boxStacking(vector<vector<int>> boxes){
    int n = boxes.size();
    sort(boxes.begin(),boxes.end(),comp);
    vector<int> heights(n);
    
    for (int i = 0; i < n; i++)
    {
        heights[i] = boxes[i][2];
    }
    for (auto &&i : heights)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    int maxHeight= 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            
            if(CanPlace(boxes[i],boxes[j])){
                heights[i] = max(heights[i], boxes[i][2]+heights[j]);
                maxHeight = max(maxHeight,heights[i]);
            }
        }
        
    }

    for (auto &&i : heights)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    

    return maxHeight;

    
}

int main(int argc, char const *argv[])
{

    vector<vector<int>> boxes = {
        {2,1,2},
        {3,2,3},
        {2,2,8},
        {2,3,4},
        {2,2,1},
        {4,4,5},
    };

    
    int height = boxStacking(boxes);
    cout<<height<<endl;
    return 0;

}