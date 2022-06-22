#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

pair<int, int> constructMaxSumNumber(vector<int> &nums)
{
    // Write your code here...
    if (nums.size() <= 1)
    {
        return {0, 0};
    }

    sort(nums.rbegin(), nums.rend());

    int ans1 = 0;
    int ans2 = 0;

    for (int i = 0; i < nums.size(); i += 2)
    {
        ans1 = ans1 * 10 + nums[i];
        if (i + 1 < nums.size())
        {
            ans2 = ans2 * 10 + nums[i + 1];
        }
    }

    return {ans1, ans2};
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