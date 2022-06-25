#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

bool hasPairs(vector<int> const &nums, int k)
{
    // Write your code here...
    if (nums.size() & 1)
    {
        return false;
    }
    unordered_map<int, int> Map;

    for (auto el : nums)
    {
        int rem = ((el % k) + k) % k;
        Map[rem]++;
    }

    for (auto p : Map)
    {
        if (p.first == 0)
        {
            if (p.second % 2 != 0)
            {
                return false;
            }
        }
        else
        {
            if (k - p.first == p.first)
            {
                if (p.second % 2 != 0)
                {
                    return false;
                }
            }
            else if (p.second != Map[k - p.first])
            {
                return false;
            }
        }
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
    vector<int> arr = {1, 2, 3, 3};

    cout << hasPairs(arr, 2);

    return 0;
}