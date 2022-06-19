#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

pair<int, int> findSmallestWindow(vector<int> const &nums)
{
    // Write your code here...
    if (nums.size() == 0)
    {
        return {};
    }
    int max_so_far = INT_MIN;
    int r = -1;
    int min_so_far = INT_MAX;
    int l = -1;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] >= max_so_far)
        {
            max_so_far = nums[i];
        }
        else
        {
            r = i;
        }
    }

    for (int i = nums.size() - 1; i >= 0; i--)
    {
        if (nums[i] <= min_so_far)
        {
            min_so_far = nums[i];
        }
        else
        {
            l = i;
        }
    }

    if (r > l)
    {
        return {l, r};
    }

    return {0, 0};
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

    vector<int> arr = {1, 3, 2, 7, 5, 6, 4, 8};

    auto p = findSmallestWindow(arr);

    cout << p.first << " " << p.second;

    return 0;
}