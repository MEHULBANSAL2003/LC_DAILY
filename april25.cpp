#include <bits/stdc++.h>
using namespace std;

  int solve(string &s, int index, int k, char ch, vector<vector<int>> &dp)
    {
        if(s.size()==index)
        {
            return 0;
        }
        if(dp[index][ch]!=-1)
        {
            return dp[index][ch];
        }
        int take=0;
        if(abs(ch-s[index])<=k||ch=='#')
        {
            take=1+solve(s,index+1,k,s[index],dp);
        }
        int notake=solve(s,index+1,k,ch,dp);
        return dp[index][ch]=max(take,notake);
    }
    int longestIdealString(string s, int k) {
        vector<vector<int>> dp(s.size()+1,vector<int>(123,-1));
        return solve(s, 0, k, '#', dp);
    }

int main(){
    string s;
    cin>>s;
    int k;
    cin>>k;

    cout<<longestIdealString(s,k)<<endl;
}