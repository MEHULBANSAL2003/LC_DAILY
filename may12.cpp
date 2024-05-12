#include <bits/stdc++.h>
using namespace std;

int helper(vector<vector<int>>& grid, int x, int y) {
        int ans = 0;
        for (int i = x; i < x + 3; i++) {
            for (int j = y; j < y + 3; j++) {
                ans = max(ans, grid[i][j]);
            }
        }
        
        return ans;
    }
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>> ans(n-2,vector<int>(n-2,0));

        for(int i=0;i<n-2;i++){
            for(int j=0;j<n-2;j++){
                ans[i][j]=helper(grid,i,j);
            }
        }
        return ans;

    }

int main(){

int n;
cin>>n;

vector<vector<int>> v(n,vector<int>(n));

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        int a;
        cin>>a;
        
        v[i][j]=a;

    }
}

vector<vector<int>> ans=largestLocal(v);

for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans.size();j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}

}