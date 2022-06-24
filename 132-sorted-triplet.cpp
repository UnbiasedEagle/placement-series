#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

tuple<int, int, int> findSortedTriplet(vector<int> const &nums)
{
    // Write your code here...

    if (nums.size() <= 2)
    {
        return {0, 0, 0};
    }

    int min_idx = 0;
    int low = -1;
    int mid = -1;

    for (int i = 1; i < nums.size(); i++)
    {
        // if the current element is less than the minimum element found so far
        if (nums[i] <= nums[min_idx])
        {
            min_idx = i;
        }
        else if (mid == -1)
        {
            low = min_idx;
            mid = i;
        }
        else if (nums[i] <= nums[mid])
        {
            low = min_idx;
            mid = i;
        }
        else if (nums[i] > nums[mid])
        {
            return {nums[low], nums[mid], nums[i]};
        }
    }

    return {0, 0, 0};
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