#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

int findPartitionIndex(vector<int> const &nums)
{
    // Write your code here...
    int idx = -1;
    int curr_sum = 0;

    int total_sum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        total_sum += nums[i];
    }

    for (int i = 0; i < nums.size(); i++)
    {
        if (curr_sum == total_sum)
        {
            return i;
        }

        curr_sum += nums[i];
        total_sum -= nums[i];
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