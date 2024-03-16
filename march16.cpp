#include <bits./stdc++.h>
using namespace std;
int helper(vector<int>& nums){
 unordered_map<int,int> mp;
     int sum=0;
     int ans=0;
     for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
            sum+=1;
        }
        else{
            sum+=-1;
        }
        if(sum==0){
            ans=i+1;
        }
        else if(mp.find(sum)!=mp.end()){
            ans=max(ans,i-mp[sum]);
        }
        else{
            mp[sum]=i;
        }
     }
     return  ans;


}
int main(){

int n;
cin>>n;

vector<int> v(n);

for(int i=0;i<n;i++){
    cin>>v[i];
}

int ans=helper(v);
cout<<ans<<endl;


}