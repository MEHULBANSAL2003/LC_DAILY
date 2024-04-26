#include <bits/stdc++.h>
using namespace std;

int helper(int i,int j, vector<vector<int>>& grid,vector<vector<int>>& dp){
    if(i==grid.size()-1){
        return grid[i][j];
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
      int pick=INT_MAX;
    for(int k=0;k<grid.size();k++){
        if(k!=j){
         pick=min(pick,grid[i][j]+helper(i+1,k,grid,dp));
        }
    }

    return dp[i][j]=pick;
}
    int minFallingPathSum(vector<vector<int>>& grid) {
         int ans=INT_MAX;
         vector<vector<int>> dp(grid.size()+1,vector<int>(grid.size()+1,-1));
       for(int i=0;i<grid.size();i++){
             ans=min(ans,helper(0,i,grid,dp));

       }

       return ans;
    }

int main(){
    int n;
    cin>>n;
    vector<vector<int>> grid;

    for(int i=0;i<n;i++){
        vector<int> temp;
        for(int j=0;j<n;j++){
            int a;
            cin>>a;
            temp.push_back(a);
        }
        grid.push_back(temp);
    }

    cout<<minFallingPathSum(grid)<<endl;
}