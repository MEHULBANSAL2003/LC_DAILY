#include <bits/stdc++.h>
using namespace std;

int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        for(int i=1;;i++){
            if(mp[i]==0){
                return i;
            }
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

int ans=firstMissingPositive(v);
cout<<ans<<endl;


}