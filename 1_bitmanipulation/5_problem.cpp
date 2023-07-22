// Maximum Score :You are given an m x n binary matrix grid.
// A move consists of choosing any row or column and toggling each value in that row or column (i.e., changing all 0's to 1's, and all 1's to 0's).
// Every row of the matrix is interpreted as a binary number, and the score of the matrix is the sum of these numbers.
// Return the highest possible score after making any number of moves (including zero moves).

// Constraints:

// m == grid.length
// n == grid[i].length
// 1 <= m, n <= 20
// grid[i][j] is either 0 or 1.

// Input: grid = [[0,0,1,1],[1,0,1,0],[1,1,0,0]]
// Output: 39
// Explanation: 15 + 9 + 15 = 39


#include<bits/stdc++.h>
using namespace std;

int matrixScore(vector<vector<int>> grid) {
    int ans=0,n=grid.size(),m=grid[0].size();
    ans=(1<<(m-1))*n;
    for(int j=1;j<m;j++)
    {
        int val=1<<(m-1-j);
        int sets=0;
        for(int i=0;i<n;i++)
        {
            if(grid[i][j]==grid[i][0])
            {
                //sets the first column of each row to 1 if not as it will provide the max value for the row
                sets++;
            }
        }
        // altering the values in the columns to provid max ones in each column i.e more than half
        ans+=max(sets,n-sets)*val;
    }
    return ans;
}