#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

vector<int> findMaxLenSubarray(vector<int> const &nums, int target)
{
    // Write your code here...

    unordered_map<int, int> Map;

    int end = -1;
    int len = 0;

    Map[0] = -1;

    int sum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];

        if (Map.find(sum - target) != Map.end())
        {
            int curr_len = i - Map[sum - target];

            if (curr_len > len)
            {
                len = curr_len;
                end = i;
            }
        }

        if (Map.find(sum) == Map.end())
        {
            Map[sum] = i;
        }
    }

    vector<int> ans;

    if (len == 0)
    {
        return ans;
    }

    int start = end - len + 1;

    for (int i = start; i <= end; i++)
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
    return 0;
}