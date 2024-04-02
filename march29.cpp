#include <bits/stdc++.h>
using namespace std;

    long long countSubarrays(vector<int>& nums, int k) {
        int maxi=INT_MIN;        
        for(auto x:nums) maxi=max(maxi,x);

    long long ans=0;
        int left=0,right=0;
        while(right<nums.size()){
            if(nums[right]==maxi){
                k--;
            }

            while(k==0){
                if(nums[left]==maxi){
                    k++;
                }
                left++;
            }
            ans+=left;
            right++;
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
int k;
cin>>k;

int ans=countSubarrays(v,k);
cout<<ans<<endl;

}