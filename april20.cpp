#include <bits/stdc++.h>
using namespace std;

 vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        vector<vector<int>> ans;
        for(int r1=0;r1<land.size();r1++){
            for(int c1=0;c1<land[0].size();c1++){
                if(land[r1][c1]==1){
                    int r2=r1,c2=c1;
                for(r2=r1;r2<land.size()&&land[r2][c1];r2++){
                    for(c2=c1;c2<land[0].size()&&land[r2][c2];c2++){
                        land[r2][c2]=0;
                    }
                }

                ans.push_back({r1,c1,r2-1,c2-1});
                 

                }
            }
        }
            return ans;
        }

int main()
{
    int row, col;
    cin >> row >> col;

    vector<vector<int>> v;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> v[i][j];
        }
    }
vector<vector<int>> ans=findFarmland(v);

for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}
}