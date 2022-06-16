#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

// pair<int, int> findPair(vector<int> const &arr)
// {
//     // Write your code here...

//     vector<int> nums(arr);

//     if (nums.size() <= 1)
//     {
//         return {-1, -1};
//     }

//     if (nums.size() == 2)
//     {
//         return {nums[0], nums[1]};
//     }

//     sort(nums.begin(), nums.end());
//     int n = nums.size();

//     if (nums[0] * nums[1] > nums[n - 1] * nums[n - 2])
//     {
//         return {nums[0], nums[1]};
//     }

//     return {nums[n - 1], nums[n - 2]};
// }

pair<int, int> findPair(vector<int> const &nums)
{
    // Write your code here...

    if (nums.size() <= 1)
    {
        return {-1, -1};
    }

    int max1 = nums[0];
    int max2 = INT_MIN;

    int min1 = nums[0];
    int min2 = INT_MAX;

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] > max1)
        {
            max2 = max1;
            max1 = nums[i];
        }
        else if (nums[i] > max2)
        {
            max2 = nums[i];
        }

        if (nums[i] < min1)
        {
            min2 = min1;
            min1 = nums[i];
        }

        else if (nums[i] < min2)
        {
            min2 = nums[i];
        }
    }

    if (max1 * max2 > min1 * min2)
    {
        return {max1, max2};
    }

    return {min1, min2};
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