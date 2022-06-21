#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

// int findDifference(vector<int> const &nums, int x, int y)
// {
//     // Write your code here...
//     vector<int> idx1;
//     vector<int> idx2;

//     if (nums.size() == 0)
//     {
//         return 0;
//     }

//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (nums[i] == x)
//         {
//             idx1.push_back(i);
//         }
//         else if (nums[i] == y)
//         {
//             idx2.push_back(i);
//         }
//     }

//     int ans = INT_MAX;

//     for (int i = 0; i < idx1.size(); i++)
//     {
//         for (int j = 0; j < idx2.size(); j++)
//         {
//             ans = min(ans, abs(idx1[i] - idx2[j]));
//         }
//     }

//     return ans == INT_MAX ? 0 : ans;
// }

int findDifference(vector<int> const &nums, int x, int y)
{
    // Write your code here...
    int prev_x = -1;
    int prev_y = -1;

    int ans = INT_MAX;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == x)
        {
            if (prev_y != -1)
            {
                ans = min(ans, abs(i - prev_y));
            }

            prev_x = i;
        }
        else if (nums[i] == y)
        {
            if (prev_x != -1)
            {
                ans = min(ans, abs(i - prev_x));
            }
            prev_y = i;
        }
    }

    if (ans == INT_MAX)
    {
        return 0;
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