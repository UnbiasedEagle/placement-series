#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

int findMaxSubarraySum(vector<int> const &nums)
{
    // Write your code here...

    if (nums.size() == 0)
    {
        return 0;
    }

    int max_ans = nums[0];
    int curr_ans = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        curr_ans = max(curr_ans + nums[i], nums[i]);
        max_ans = max(max_ans, curr_ans);
    }

    return max_ans;
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