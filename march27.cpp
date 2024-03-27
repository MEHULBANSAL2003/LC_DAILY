#include <bits/stdc++.h>
using namespace std;

 int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1){
            return 0;
        }
         int ans=0,right=0,left=0;
        long long int product=1;
        while(right<nums.size()){
            product*=nums[right];

            while(product>=k){
                product/=nums[left++];
                
            }
            ans+=right-left+1;
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

    int ans=numSubarrayProductLessThanK(v,k);

    cout<<ans<<endl;
}