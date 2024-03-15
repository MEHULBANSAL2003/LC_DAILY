#include <bits/stdc++.h>
using namespace std;
vector<int> helper(vector<int>& nums){

    vector<int> ans(nums.size(),0);
     int temp=1;
     int zero=0;
     for(int i=0;i<nums.size();i++){
         if(nums[i]==0){
             zero++;
             continue;
         }

         temp*=nums[i];
     }   
     if(zero>1){
       
         return ans;
     }
     if(zero==1){
         for(int i=0;i<nums.size();i++){
             if(nums[i]!=0){
                 ans[i]=0;
             }
             else{
                 ans[i]=temp;
             }
         }
     }
   if(zero==0){
     for(int i=0;i<nums.size();i++){
         ans[i]=temp/nums[i];
     }
   }
     return ans;
}
int main(){

int n;
cin>>n;

vector<int> v(n);

for(int i=0;i<n;i++){
    cin>>v[i];
}

vector<int> ans=helper(v);

for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
}
cout<<endl;
return 0;


}

