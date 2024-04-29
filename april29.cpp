#include <bits/stdc++.h>
using namespace std;

 int minOperations(vector<int>& nums, int k) {
        int finalXor = 0;
  for(int i=0;i<nums.size();i++){
    finalXor=finalXor^nums[i];
}
        
        int count = 0;

        while (k || finalXor) {

            if ((k % 2) != (finalXor % 2)) {
                count++;
            }
           
            
            k /= 2;
            finalXor /= 2;
            
        }
        
        return count;
    }

int main(){
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
         nums.push_back(a);

    }

    int k;
    cin>>k;

    cout<<minOperations(nums,k)<<endl;
}