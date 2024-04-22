#include <bits/stdc++.h>
using namespace std;

char turnright(char c) { return (c == '9' ? '0' : c + 1); }

char turnleft(char c) { return (c == '0' ? '9' : c - 1); }
vector<string> nextoptions(string s)
{
    vector<string> ans;
    for (int i = 0; i < 4; i++)
    {
        string copy = s;
        copy[i] = turnright(s[i]);
        ans.push_back(copy);
        copy[i] = turnleft(s[i]);
        ans.push_back(copy);
    }
    return ans;
}
int openLock(vector<string> &deadends, string target)
{
    queue<string> q;
    q.push("0000");
    unordered_map<string, bool> visited;
    visited["00000"] = true;
    unordered_set<string> deadend(deadends.begin(), deadends.end());
    int ans = 0;

    while (!q.empty())
    {
        int size = q.size();
        while (size--)
        {
            string s = q.front();
            q.pop();

            if (s == target)
                return ans;
            if (deadend.find(s) != deadend.end())
                continue;

            for (string option : nextoptions(s))
            {
                if (!visited[option])
                {
                    q.push(option);
                    visited[option] = true;
                }
            }
        }
        ans++;
    }
    return -1;
}

int main()
{

    int n;
    cin >> n;
    vector<string> deadends(n);

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        deadends[i] = s;
    }
    string target;
    cin >> target;

    int ans = openLock(deadends, target);

    cout << ans << endl;
}