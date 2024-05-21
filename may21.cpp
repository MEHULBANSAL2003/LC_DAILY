#include <bits/stdc++.h>
using namespace std;

void helper(int i,vector<int>& nums, vector<vector<int>>& ans,vector<int>& temp){
         if(i==nums.size()){
             ans.push_back(temp);
             return;
         }
             temp.push_back(nums[i]);
             helper(i+1,nums,ans,temp);
             temp.pop_back();
             helper(i+1,nums,ans,temp);


   }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        
        helper(0,nums,ans,temp);
        return ans;
    }

int main(){
    int n;
    cin>>n;
    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    vector<vector<int>> ans=subsets(v);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}