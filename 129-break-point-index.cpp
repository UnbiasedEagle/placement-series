#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

int findBreakPoint(vector<int> const &nums)
{
    // Write your code here...
    if (nums.size() <= 2)
    {
        return -1;
    }

    int total = 0;

    for (auto el : nums)
    {
        total += el;
    }

    int curr = nums[0];
    total -= nums[0];
    for (int i = 1; i < nums.size() - 1; i++)
    {
        total -= nums[i];

        if (curr == total)
        {
            return i;
        }
        curr += nums[i];
    }

    return -1;
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