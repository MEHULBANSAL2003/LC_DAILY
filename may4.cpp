#include <bits/stdc++.h>
using namespace std;

int numRescueBoats(vector<int> &people, int limit)
{
    sort(people.begin(), people.end());

    int ans = 0;

    int si = 0;
    int li = people.size() - 1;

    while (si <= li)
    {
        int temp = people[si] + people[li];

        if (temp <= limit)
        {
            ans++;
            si++;
            li--;
        }
        else
        {
            li--;
            ans++;
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    int limit;
    cin >> limit;

    cout << numRescueBoats(v, limit);
}