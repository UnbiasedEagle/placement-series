#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

bool isConsecutive(vector<int> const &nums)
{
    // Write your code here...
    if (nums.size() <= 1)
    {
        return true;
    }

    int mini = nums[0];
    int maxi = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        mini = min(mini, nums[i]);
        maxi = max(maxi, nums[i]);
    }

    if (nums.size() != maxi - mini + 1)
    {
        return false;
    }

    unordered_set<int> Set;

    for (int i = 0; i < nums.size(); i++)
    {
        if (Set.find(nums[i]) != Set.end())
        {
            return false;
        }
        Set.insert(nums[i]);
    }

    return true;
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