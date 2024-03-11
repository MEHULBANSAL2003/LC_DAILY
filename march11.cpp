#include <bits/stdc++.h>
using namespace std;
string customesort(string order,string s){
            string ans="";
        unordered_map<char,int> mp;
        for(char c:s){
            mp[c]++;
        }
        for(char c: order){
            if(mp[c]>0){
                for(int i=0;i<mp[c];i++){
                    ans+=c;
                }
                mp.erase(c);
            }
        }
    
    for(char c: s){
            if(mp[c]>0){
                for(int i=0;i<mp[c];i++){
                    ans+=c;
                }
                mp.erase(c);
            }
        }
        return ans;
}
int main(){

string order;
cin>>order;
string s;
cin>>s;

string ans=customesort(order,s);

cout<<ans<<endl;



}