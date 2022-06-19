#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

int findMaxProduct(vector<int> const &nums)
{
    // Write your code here...
    if (nums.size() == 0)
    {
        return 0;
    }

    int max_product = nums[0];
    int min_product = nums[0];
    int ans = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] >= 0)
        {
            max_product = max(nums[i], max_product * nums[i]);
            min_product = min(nums[i], min_product * nums[i]);
        }
        else
        {
            int temp = max_product;
            max_product = max(nums[i], min_product * nums[i]);
            min_product = min(nums[i], nums[i] * temp);
        }

        ans = max(ans, max_product);
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
