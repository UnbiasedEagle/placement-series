#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

set<set<pair<int, int>>> findPairs(vector<int> const &nums)
{
    set<set<pair<int, int>>> result;

    unordered_map<int, set<pair<int, int>>> Map;

    // Write your code here...
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            int sum = nums[i] + nums[j];

            if (Map.find(sum) != Map.end())
            {
                for (auto p : Map[sum])
                {
                    int m = p.first;
                    int n = p.second;

                    if (i != m and i != n and j != m and j != n)
                    {
                        set<pair<int, int>> ds;
                        ds.insert({m, n});
                        ds.insert({i, j});
                        result.insert(ds);
                    }
                }
            }

            Map[sum].insert({i, j});
        }
    }

    return result;
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

    vector<int> arr = {3, 4, 7, 3, 4};

    set<set<pair<int, int>>> ans = findPairs(arr);

    for (auto s : ans)
    {
        for (auto el : s)
        {
            cout << el.first << " " << el.second << endl;
        }
    }

    return 0;
}