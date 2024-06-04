#include <bits/stdc++.h>
using namespace std;

int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        int ans=0;
        int flag=0;
        for(auto x:mp){
            if(x.second%2==0){
                ans+=x.second;
            }
            if(x.second%2!=0){
                ans+=x.second-1;
            }
            if(flag==0&& x.second%2!=0){
                ans++;
                flag=1;
            }

        }

        return ans;

    }

int main(){
    string s;
    cin>>s;
    cout<<longestPalindrome(s)<<endl;
}