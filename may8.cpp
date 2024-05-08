#include <bits/stdc++.h>
using namespace std;

vector<string> findRelativeRanks(vector<int>& score) {
     vector<string> ans(score.size());
     priority_queue<pair<int,int>> pq;

     for(int i=0;i<score.size();i++){
         pq.push({score[i],i});
     }
     int a=1;
     while(!pq.empty()){
         int temp=pq.top().first;
         int index=pq.top().second;
         pq.pop();
         if(a==1){
             ans[index]="Gold Medal";
         }
         else if(a==2){
             ans[index]="Silver Medal";

         }
         else if(a==3){
             ans[index]="Bronze Medal";
         }
         else{
             string b=to_string(a);
             ans[index]=b;
         }
         a++;
         
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
vector<string> ans=findRelativeRanks(v);

for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
}
cout<<endl;

}