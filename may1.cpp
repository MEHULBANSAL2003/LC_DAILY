#include <bits/stdc++.h>
using namespace std;

string reversePrefix(string word, char ch) {
         string ans="";
         int flag=0;
         int ind=-1;
         for(int i=0;i<word.length();i++){
            ans+=word[i];
            if(word[i]==ch){
                flag=1;
                ind=i;
                break;
            }
         }

         if(flag==1){
            reverse(ans.begin(),ans.end());
            for(int i=ind+1;i<word.length();i++) ans+=word[i];
         }

         if(flag==0){
            return word;
         }

         return ans;
    }

int main(){
    string word;
    cin>>word;
    char c;
    cin>>c;

   cout<<reversePrefix(word,c)<<endl;
}