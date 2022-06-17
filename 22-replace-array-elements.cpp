#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

int solve(vector<int> &nums, int idx, int left_prod)
{
    if (idx == nums.size())
    {
        return 1;
    }

    int temp = nums[idx];
    nums[idx] = left_prod;
    int right_product = solve(nums, idx + 1, left_prod * temp);
    nums[idx] = nums[idx] * right_product;
    return right_product * temp;
}

void rearrange(vector<int> &nums)
{
    // Write your code here...
    solve(nums, 0, 1);
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