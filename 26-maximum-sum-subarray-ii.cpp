#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

vector<int> findMaxSumSubarray(vector<int> const &nums)
{
    // Write your code here...
    if (nums.size() == 0)
    {
        return {};
    }

    int max_end = 0;
    int max_start = 0;
    int curr_start = 0;
    int curr_end = 0;
    int max_ans = nums[0];
    int curr_ans = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] > curr_ans + nums[i])
        {
            curr_ans = nums[i];
            curr_start = i;
            curr_end = i;
            if (curr_ans > max_ans)
            {
                max_end = curr_end;
                max_start = curr_start;
                max_ans = curr_ans;
            }
        }
        else
        {
            curr_ans += nums[i];
            curr_end = i;
            if (curr_ans > max_ans)
            {
                max_start = curr_start;
                max_end = curr_end;
                max_ans = curr_ans;
            }
        }
    }

    vector<int> ans;

    for (int i = max_start; i <= max_end; i++)
    {
        ans.push_back(nums[i]);
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

    vector<int> arr = {8, -7, -3, 5, 6, -2, 3, -4, 2};

    vector<int> ans = findMaxSumSubarray(arr);

    for (auto el : ans)
    {
        cout << el << " ";
    }

    return 0;
}