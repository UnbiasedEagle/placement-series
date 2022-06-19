#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

vector<int> findMinSumSubarray(vector<int> const &nums, int k)
{
    vector<int> minSumSubarray;

    if (k > nums.size())
    {
        return nums;
    }

    // Write your code here...
    int sum = 0;

    for (int i = 0; i < k; i++)
    {
        sum += nums[i];
    }

    int min_sum = sum;
    int end = k - 1;
    int start = 0;

    for (int i = k; i < nums.size(); i++)
    {
        sum += nums[i];
        sum -= nums[i - k];

        if (sum < min_sum)
        {
            min_sum = sum;
            end = i;
            start = i - k + 1;
        }
    }
    for (int i = start; i <= end; i++)
    {
        minSumSubarray.push_back(nums[i]);
    }

    return minSumSubarray;
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