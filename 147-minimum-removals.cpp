#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

// Largest subarray where 2*minimum element is greater then maximum element
int findMin(vector<int> &nums)
{
    // Write your code here...
    int max_range = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        int mini = nums[i];
        int maxi = nums[i];

        for (int j = i; j < nums.size(); j++)
        {
            mini = min(mini, nums[j]);
            maxi = max(maxi, nums[j]);

            if (maxi >= 2 * mini)
            {
                break;
            }

            max_range = max(max_range, j - i + 1);
        }
    }

    return nums.size() - max_range;
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