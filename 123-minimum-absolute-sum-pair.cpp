#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

pair<int, int> findPair(vector<int> const &nums)
{
    // Write your code here...
    if (nums.size() <= 1)
    {
        return {-1, -1};
    }

    int l = 0;
    int r = nums.size() - 1;

    int ans1 = 0;
    int ans2 = nums.size() - 1;

    while (l <= r)
    {
        if (abs(nums[l] + nums[r]) < abs(nums[ans1] + nums[ans2]))
        {
            ans1 = l;
            ans2 = r;
        }

        if (nums[l] + nums[r] > 0)
        {
            r--;
        }
        else
        {
            l++;
        }
    }

    return {nums[ans1], nums[ans2]};
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