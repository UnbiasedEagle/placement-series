#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"
vector<int> findDistinctCount(vector<int> const &nums, int k)
{
    // Write your code here...
    unordered_map<int, int> Map;

    vector<int> ans;

    if (k > nums.size())
    {
        return ans;
    }

    for (int i = 0; i < k; i++)
    {
        Map[nums[i]]++;
    }

    ans.push_back(Map.size());

    for (int i = k; i < nums.size(); i++)
    {
        Map[nums[i - k]]--;
        if (Map[nums[i - k]] == 0)
        {
            Map.erase(nums[i - k]);
        }

        Map[nums[i]]++;

        ans.push_back(Map.size());
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