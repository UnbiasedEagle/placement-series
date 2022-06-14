#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

pair<int, int> findPair(vector<int> const &nums, int target)
{
    // Write your code here...
    unordered_set<int> Set;

    for (int i = 0; i < nums.size(); i++)
    {
        int comp = target - nums[i];

        if (Set.find(comp) != Set.end())
        {
            return {comp, nums[i]};
        }

        Set.insert(nums[i]);
    }

    return {-1, -1};
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