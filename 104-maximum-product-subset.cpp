#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

int findMaxProduct(vector<int> const &nums)
{
    if (nums.size() == 0)
    {
        return 0;
    }
    if (nums.size() == 1)
    {
        return nums[0];
    }

    int product = 1;
    int negative_count = 0;
    int positive_count = 0;
    int zero_count = 0;
    int abs_min = INT_MAX;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] < 0)
        {
            negative_count++;
            if (abs(nums[i]) < abs(abs_min))
            {
                abs_min = nums[i];
            }
        }
        else if (nums[i] == 0)
        {
            zero_count = 1;
        }
        else
        {
            positive_count++;
        }

        if (nums[i] != 0)
        {
            product *= nums[i];
        }
    }

    if (negative_count & 1)
    {
        product = product / abs_min;
    }

    if (positive_count == 0 and negative_count == 0 and zero_count)
    {
        product = 0;
    }

    if (positive_count == 0 and negative_count == 1 and zero_count)
    {
        product = 0;
    }

    return product;
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