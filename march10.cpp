#include <bits/stdc++.h>
using namespace std;
vector<int> intersection(vector<int>& nums1,vector<int>& nums2){

 int m = nums2.size();
        vector<int>result;
        unordered_map<int,int>mp;
        for(auto &num : nums1){
            mp[num]++;
        }
        for(auto & num : nums2){
            if(mp.find(num) != mp.end()){
                result.push_back(num);
                mp.erase(num);
            }
        }
        return result;


}
int main(){
int n;
cin>>n;

vector<int> v1(n);

for(int i=0;i<n;i++){
    cin>>v1[i];
}
int m;
cin>>m;

vector<int> v2(m);

for(int i=0;i<m;i++){
    cin>>v2[i];
}

vector<int> ans=intersection(v1,v2);

for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}





}