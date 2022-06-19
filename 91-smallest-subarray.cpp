#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

int findSmallestSubarray(vector<int> const &nums, int k)
{
    // Write your code here...
    int min_len = INT_MAX;

    int l = 0;
    int r = 0;
    int sum = 0;

    while (r < nums.size())
    {
        sum += nums[r];

        while (sum > k and l <= r)
        {
            min_len = min(min_len, r - l + 1);
            sum -= nums[l];
            l++;
        }

        r++;
    }

    if (min_len == INT_MAX)
    {
        return 0;
    }

    return min_len;
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