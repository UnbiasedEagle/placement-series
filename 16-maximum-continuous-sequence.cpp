#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

int findIndexofZero(vector<int> const &nums)
{
    // Write your code here...

    int ans = -1;
    int idx = -1;
    int len = 0;

    int curr_len = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            curr_len++;
        }
        else
        {
            if (idx == -1)
            {
                idx = i;
                curr_len++;
            }
            else
            {
                int new_idx = idx + 1;
                curr_len = i - new_idx + 1;
                idx = i;
            }
        }

        if (curr_len > len)
        {
            ans = idx;
            len = curr_len;
        }
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