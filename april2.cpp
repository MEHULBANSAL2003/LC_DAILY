#include <bits/stdc++.h>
using namespace std;

 bool isIsomorphic(string s, string t) {
        map<char, int> mp1;
        map<char, int> mp2;


        for (int i = 0; i < s.length(); i++) {
            if (mp1[s[i]] != mp2[t[i]]) {
                return false;
            }
            mp1[s[i]] = i + 1;
            mp2[t[i]] = i + 1;
        }
        return true;
    }

int main(){

string s,t;
cin>>s>>t;

bool ans=isIsomorphic(s,t);

cout<<ans;

}