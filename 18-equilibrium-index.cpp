#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

unordered_set<int> findEquilibriumIndex(vector<int> const &nums)
{
    unordered_set<int> indices;

    // Write your code here...

    int total = 0;

    for (auto el : nums)
    {
        total += el;
    }

    int prefix_sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {

        total -= nums[i];

        if (prefix_sum == total)
        {
            indices.insert(i);
        }

        prefix_sum += nums[i];
    }

    return indices;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    return 0;
}