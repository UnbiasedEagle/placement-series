#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

pair<int, int> findMinAndMax(vector<int> const &nums)
{
    // Write your code here...
    int maxi = nums[0];
    int mini = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        maxi = max(maxi, nums[i]);
        mini = min(nums[i], mini);
    }

    return {mini, maxi};
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