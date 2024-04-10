#include <bits/stdc++.h>
using namespace std;
 vector<int> deckRevealedIncreasing(vector<int>& deck) {
         vector<int> ans(deck.size());
         queue<int> q;

         for(int i=0;i<deck.size();i++){
            q.push(i);
         }
         sort(deck.begin(),deck.end());

         for(int i=0;i<deck.size();i++){
            ans[q.front()]=deck[i];
            q.pop();
            int a=q.front();
            q.pop();
            q.push(a);
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

vector<int> ans=deckRevealedIncreasing(v);

for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
}
cout<<endl; 


}