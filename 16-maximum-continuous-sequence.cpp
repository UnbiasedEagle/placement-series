#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

int findIndexofZero(vector<int> const &nums)
{
    // Write your code here...
    int idx = -1;
    int prev_idx = -1;
    int count = 0;
    int max_len = 0;
    int left = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
        {
            prev_idx = i;
            count++;
        }

        if (count == 2)
        {
            while (nums[left])
            {
                left++;
            }

            left++;
            count = 1;
        }

        if (i - left + 1 > max_len)
        {
            max_len = i - left + 1;
            idx = prev_idx;
        }
    }

    return idx;
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