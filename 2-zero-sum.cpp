#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

bool hasZeroSumSubarray(vector<int> const &nums)
{
    // Write your code here...
    unordered_set<int> ds;

    ds.insert(0);

    int sum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];

        if (ds.find(sum) != ds.end())
        {
            return true;
        }
        ds.insert(sum);
    }

    return false;
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