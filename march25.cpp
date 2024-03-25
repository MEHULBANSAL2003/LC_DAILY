#include <bits/stdc++.h>
using namespace std;
vector<int> findDuplicates(vector<int> &nums)
{
    vector<int> result;
    for (int i = 0; i < nums.size(); ++i)
    {
        int index = abs(nums[i]) - 1;
        if (nums[index] < 0)
        {
            result.push_back(index + 1);
        }
        else
        {
            nums[index] = -nums[index];
        }
    }
    return result;
}

int main()
{

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> ans = findDuplicates(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}