#include <bits/stdc++.h>
using namespace std;

 int atMostK(vector<int>&nums,int k){
        map<int,int> mp;
        int i=0,ans = 0;
        for(int j=0;j<nums.size();j++){
            mp[nums[j]]++;

            while(mp.size() > k){
                mp[nums[i]]--;
                if(mp[nums[i]] == 0) mp.erase(nums[i]);
                i++;
            }

            ans += (j - i + 1);
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

int ans=atMostK(v,k)-atMostK(v,k-1);

cout<<ans<<endl;

}