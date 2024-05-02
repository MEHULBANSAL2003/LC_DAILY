#include <bits/stdc++.h>
using namespace std;

int findMaxK(vector<int> &nums)
{
    unordered_map<int, int> mp;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        mp[nums[i]] = i;
    }
    int maxi = -1;
    for (int i = 0; i < n; i++)
    {
        int tar = -nums[i];
        if (mp.count(tar))
        {
            maxi = max(maxi, abs(tar));
        }
    }
    return maxi;
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

    cout << findMaxK(v);
}