#include <bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string string) {
        int n=string.size();
        int cnt=0;
        for(int i=n-1;i>=0;i--)
        {
            if (isspace(string.at(i)) && cnt>0) break;
            else
            {
                if (isspace(string.at(i)) && cnt==0) continue;
                else cnt++;
            }
        }
        return cnt;
    }

int main(){
    string s;
    cin>>s;
    int ans=lengthOfLastWord(s);
    cout<<ans<<endl;
}