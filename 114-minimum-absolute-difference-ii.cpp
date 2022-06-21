#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

vector<int> get_left_min(vector<int> nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        nums[i] = -1 * nums[i];
    }

    vector<int> left_max(nums.size());
    int sum1 = nums[0];
    int curr1 = nums[0];

    left_max[0] = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        curr1 = max(curr1 + nums[i], nums[i]);
        sum1 = max(sum1, curr1);
        left_max[i] = sum1;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        left_max[i] = -1 * left_max[i];
    }

    return left_max;
}

vector<int> get_right_min(vector<int> nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        nums[i] = -1 * nums[i];
    }

    vector<int> right_max(nums.size());
    right_max[nums.size() - 1] = nums[nums.size() - 1];

    int sum2 = nums[nums.size() - 1];
    int curr2 = nums[nums.size() - 1];

    for (int i = nums.size() - 2; i >= 0; i--)
    {
        curr2 = max(curr2 + nums[i], nums[i]);
        sum2 = max(sum2, curr2);
        right_max[i] = sum2;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        right_max[i] = -1 * right_max[i];
    }

    return right_max;
}

int findMaxAbsDiff(vector<int> &nums)
{
    // Write your code here...
    if (nums.size() == 0)
    {
        return 0;
    }
    if (nums.size() == 1)
    {
        return nums[0];
    }

    vector<int> left_max(nums.size());
    vector<int> right_max(nums.size());

    left_max[0] = nums[0];
    right_max[nums.size() - 1] = nums[nums.size() - 1];
    int sum1 = nums[0];
    int curr1 = nums[0];
    int sum2 = nums[nums.size() - 1];
    int curr2 = nums[nums.size() - 1];
    for (int i = 1; i < nums.size(); i++)
    {
        curr1 = max(curr1 + nums[i], nums[i]);
        sum1 = max(sum1, curr1);
        left_max[i] = sum1;
    }

    for (int i = nums.size() - 2; i >= 0; i--)
    {
        curr2 = max(curr2 + nums[i], nums[i]);
        sum2 = max(sum2, curr2);
        right_max[i] = sum2;
    }

    vector<int> left_min = get_left_min(nums);
    vector<int> right_min = get_right_min(nums);

    int ans = INT_MIN;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        ans = max(ans, max(abs(left_max[i] - right_min[i + 1]), abs(left_min[i] - right_max[i + 1])));
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
