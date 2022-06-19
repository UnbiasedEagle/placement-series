#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

// void solve(int idx, vector<int> const &nums, int k, vector<int> ds, set<vector<int>> &subarrays)
// {
//     if (nums.size() == 0 or k > nums.size())
//     {
//         return;
//     }

//     if (k == 0)
//     {
//         subarrays.insert(ds);
//         return;
//     }

//     for (int i = idx; i < nums.size(); i++)
//     {
//         ds.push_back(nums[i]);
//         solve(i + 1, nums, k - 1, ds, subarrays);
//         ds.pop_back();
//     }
// }

void solve(int idx, vector<int> const &nums, int k, vector<int> ds, set<vector<int>> &subarrays)
{
    if (nums.size() == 0 or k > nums.size())
    {
        return;
    }

    if (k == 0)
    {
        subarrays.insert(ds);
        return;
    }

    if (idx == nums.size())
    {
        return;
    }

    ds.push_back(nums[idx]);
    solve(idx + 1, nums, k - 1, ds, subarrays);
    ds.pop_back();
    solve(idx + 1, nums, k, ds, subarrays);
}

set<vector<int>> findCombinations(vector<int> const &nums, int k)
{
    set<vector<int>> subarrays;

    vector<int> ds;

    solve(0, nums, k, ds, subarrays);

    // Write your code here...

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