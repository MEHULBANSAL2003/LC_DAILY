#include <bits/stdc++.h>
using namespace std;

 int maxDepth(string s) {
        int ans = 0;

        stack<char> st;
        for (char c : s) {
            if (c == '(') {
                st.push(c);
            } else if (c == ')') {
                st.pop();
            }
            
            ans = max(ans, (int)st.size());
        }
        
        return ans;
    }

int main(){

    string s;
    cin>>s;
    int ans=maxDepth(s);

    cout<<ans<<endl;
}