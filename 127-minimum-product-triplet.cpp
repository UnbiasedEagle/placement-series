#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"
// int findMin(vector<int> &nums)
// {
//     // Write your code here...
//     if (nums.size() <= 2)
//     {
//         return 0;
//     }

//     sort(nums.begin(), nums.end());

//     return min(nums[0] * nums[nums.size() - 1] * nums[nums.size() - 2], nums[0] * nums[1] * nums[2]);
// }

int findMin(vector<int> &nums)
{
    // Write your code here...
    if (nums.size() <= 2)
    {
        return 0;
    }
    int mini1 = 0;
    int mini2 = -1;
    int mini3 = -1;

    int max1 = 0;
    int max2 = -1;

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] < nums[mini1])
        {
            mini3 = mini2;
            mini2 = mini1;
            mini1 = i;
        }
        else if (mini2 == -1 or nums[i] < nums[mini2])
        {
            mini3 = mini2;
            mini2 = i;
        }
        else if (mini3 == -1 or nums[i] < nums[mini3])
        {
            mini3 = i;
        }

        if (nums[i] > nums[max1])
        {
            max2 = max1;
            max1 = i;
        }
        else if (max2 == -1 or nums[i] > nums[max2])
        {
            max2 = i;
        }
    }

    return min(nums[mini1] * nums[max1] * nums[max2], nums[mini1] * nums[mini2] * nums[mini3]);
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