#include <bits/stdc++.h>
using namespace std;

  int findDuplicate(vector<int>& nums) {
        int n=nums.size();
     unordered_map<int,int> mp;
     for(int i=0;i<n;i++){
         if(mp.count(nums[i])>0){
             return nums[i];
         }
         mp[nums[i]]++;
     }
     return 0;
    }
int main(){
int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}

int ans= findDuplicate(v);

cout<<ans<<endl;

}