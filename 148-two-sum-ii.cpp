#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

pair<int, int> findPair(vector<int> const &nums, int target)
{
    // Write your code here...
    int idx = -1;

    for (int i = 0; i < nums.size(); i++)
    {
        if (i + 1 < nums.size() and nums[i] > nums[i + 1])
        {
            idx = i;
            break;
        }
    }

    if (idx == -1)
    {
        int l = 0;
        int r = nums.size() - 1;

        while (l < r)
        {
            int sum = nums[l] + nums[r];
            if (sum == target)
            {
                return {nums[l], nums[r]};
            }
            else if (sum > target)
            {
                r--;
            }
            else
            {
                l++;
            }
        }

        return {-1, -1};
    }

    int l = idx;
    int r = l + 1;

    while (l >= 0 and r < nums.size())
    {
        int sum = nums[l] + nums[r];
        if (sum == target)
        {
            return {nums[l], nums[r]};
        }
        if (sum > target)
        {
            l--;
        }
        else
        {
            r++;
        }
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

    vector<int> arr = {10, 15, 17, 3, 6, 8, 9};

    auto p = findPair(arr, 18);

    cout << p.first << " " << p.second;

    return 0;
}