#include <bits/stdc++.h>
using namespace std;

int leastInterval(vector<char>& tasks, int n) {
                priority_queue<int> pq;
        vector<int>mp(26,0);

        for(char i:tasks){
            mp[i-'A']++; 
        }   
        for(int i=0;i<26;++i){
            if(mp[i]) 
            pq.push(mp[i]);
        }

        int time=0; 
        while(!pq.empty()){
            vector<int>remain;
            int cycle=n+1;  

            while(cycle and !pq.empty()){
                int max_freq=pq.top(); 
                pq.pop();
                if(max_freq>1){ 
                    remain.push_back(max_freq-1);
                }
                 time++; 
                cycle--; 
            }

            for(int count:remain){
                pq.push(count); 
            }
            if(pq.empty())break;
            time+=cycle; 
        }
        return time;
    }

int main(){

int n;
cin>>n;

vector<char> v(n);

for(int i=0;i<n;i++){
    cin>>v[i];
}
int idle;
cin>>idle;
int ans=leastInterval(v,idle);

cout<<ans<<endl;


}