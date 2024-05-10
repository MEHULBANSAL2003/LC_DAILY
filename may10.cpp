#include <bits/stdc++.h>
using namespace std;

vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
      
        priority_queue<pair<double,vector<int>>> pq;

        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                pq.push({(double)arr[i]/arr[j],{arr[i],arr[j]}});
            }

        }
        int a=pq.size()-k;
        while(a--){
            pq.pop();
            
        }
       
        if(!pq.empty())
           return pq.top().second;
        return {};
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

    vector<int> ans=kthSmallestPrimeFraction(v,k);

    cout<<ans[0]<<" "<<ans[1]<<endl;
}