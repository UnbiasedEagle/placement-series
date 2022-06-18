#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

int findMaxDiff(vector<int> &nums)
{
    // Write your code here...
    int ans = -1;

    if (nums.size() <= 1)
    {
        return ans;
    }
    int n = nums.size();
    int leader = nums[n - 1];

    for (int i = n - 2; i >= 0; i--)
    {
        if (leader > nums[i])
        {
            ans = max(ans, leader - nums[i]);
        }

        leader = max(leader, nums[i]);
    }

    return ans;
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