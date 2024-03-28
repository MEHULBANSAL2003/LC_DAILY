#include <bits/stdc++.h>
using namespace std;

 int maxSubarrayLength(vector<int>& nums, int k) {
        int ans = 0, start = -1;
        unordered_map<int, int> frequency;
        
        for (int end = 0; end < nums.size(); end++) {
            frequency[nums[end]]++;
            while (frequency[nums[end]] > k) {
                start++;
                frequency[nums[start]]--;
            }
            ans = max(ans, end - start);
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

    int ans=maxSubarrayLength(v,k);

    cout<<ans<<endl;
}