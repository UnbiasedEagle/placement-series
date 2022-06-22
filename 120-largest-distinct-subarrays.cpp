#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

set<vector<int>> findDistinctSubarrays(vector<int> const &nums)
{
    set<vector<int>> subarrays;

    // Write your code here...
    if (nums.size() == 0)
    {
        return subarrays;
    }

    int l = 0;
    int r = 0;
    unordered_map<int, int> Map;
    while (r < nums.size())
    {
        if (Map.find(nums[r]) == Map.end())
        {
            Map[nums[r]] = r;
        }
        else if (Map[nums[r]] < l)
        {
            Map[nums[r]] = r;
        }
        else
        {
            vector<int> temp;

            for (int i = l; i < r; i++)
            {
                temp.push_back(nums[i]);
            }
            subarrays.insert(temp);
            l = Map[nums[r]] + 1;
            Map[nums[r]] = r;
        }
        r++;
    }
    vector<int> temp;
    for (int i = l; i < r; i++)
    {
        temp.push_back(nums[i]);
    }

    subarrays.insert(temp);

    return subarrays;
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