#include <bits/stdc++.h>
using namespace std;

long long maximumHappinessSum(vector<int> &happiness, int k)
{
    sort(happiness.begin(), happiness.end());
    long long i = happiness.size() - 1;
    long long ans = 0;
    long long a = 0;
    while (k > 0)
    {
        if (i >= 0 && happiness[i] - a > 0)
        {
            ans += happiness[i] - a;
            i--;
            a++;
        }
        k--;
    }
    return ans;
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

    int k;
    cin >> k;

    cout << maximumHappinessSum(v, k) << endl;
}