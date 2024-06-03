#include <bits/stdc++.h>
using namespace std;

int appendCharacters(string s, string t) {
         int count=0;
         int j=0;
         int len=t.length();
     for(int i=0;i<s.length();i++){
        if(j<len && (s[i]==t[j])){
            count++;
            j++;
        }

     }  
     return t.length()-count;

    }

int main(){
    string s;
    string t;
    cin>>s;
    cin>>t;

    int ans=appendCharacters(s,t);

    cout<<ans<<endl;
}