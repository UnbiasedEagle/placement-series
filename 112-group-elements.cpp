#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"
vector<int> sortArray(vector<int> const &nums)
{
    // Write your code here...
    unordered_map<int, int> Map;

    for (auto el : nums)
    {
        Map[el]++;
    }

    vector<int> ans;

    for (int i = 0; i < nums.size(); i++)
    {
        if (Map.find(nums[i]) != Map.end())
        {
            int curr = 0;
            while (curr < Map[nums[i]])
            {
                ans.push_back(nums[i]);
                curr++;
            }
            Map.erase(nums[i]);
        }
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