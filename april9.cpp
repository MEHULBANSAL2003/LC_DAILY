#include <bits/stdc++.h>
using namespace std;

int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n=tickets.size();
        queue<int> q;
        int time=0;

   for(int i=0;i<n;i++){
       q.push(tickets[i]);
   }
   int temp=k;

 while(!q.empty() && tickets[k]!=0){
     int  num=q.front()-1;
     q.pop();

     if(num>0){
         q.push(num);
     }

     if(temp==0){
         tickets[k]--;
         temp=q.size()-1;
     }
     else{
         temp--;
     }


 time++;
 }
return time;

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

int ans=timeRequiredToBuy(v,k);

cout<<ans<<endl;

}