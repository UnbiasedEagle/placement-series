#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

int get_normal_max_sum(vector<int> &nums)
{
    int max_ans = nums[0];
    int curr_ans = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        curr_ans = max(curr_ans + nums[i], nums[i]);
        max_ans = max(max_ans, curr_ans);
    }

    return max_ans;
}

int get_circular_max_sum(vector<int> &nums)
{
    int total = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        total += nums[i];
        nums[i] = -1 * nums[i];
    }

    int max_ans = nums[0];
    int curr_ans = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        curr_ans = max(curr_ans + nums[i], nums[i]);
        max_ans = max(max_ans, curr_ans);
    }

    return total + max_ans;
}

int findMaxSubarray(vector<int> &nums)
{
    // Write your code here...
    if (nums.size() == 0)
    {
        return 0;
    }

    int sum1 = get_normal_max_sum(nums);

    if (sum1 < 0)
    {
        return sum1;
    }

    int sum2 = get_circular_max_sum(nums);

    return max(sum1, sum2);
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