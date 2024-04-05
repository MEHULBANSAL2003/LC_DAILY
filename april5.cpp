#include <bits/stdc++.h>
using namespace std;

string helper(string s){
  stack<char> st;
    st.push(s[0]);
  for(int i=1;i<s.length();i++){
    
    if(!st.empty()&&abs(st.top()-s[i])==32 ){
        st.pop();
    }
    else{
        st.push(s[i]);
    }
  }
  string ans="";
  while(!st.empty()){
    ans+=st.top();
    st.pop();
  }
return ans;
}
    string makeGood(string s) {
        string ans=helper(s);
        if(ans==""){
            return "";
        }
        reverse(ans.begin(),ans.end());

        return ans;
    }

int main(){
string s;
cin>>s;

string ans=makeGood(s);

cout<<ans<<endl;


}