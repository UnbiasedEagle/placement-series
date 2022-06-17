#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

void rearrange(vector<int> &nums)
{
    // Write your code here...
    for (int i = 1; i < nums.size(); i += 2)
    {
        if (i - 1 >= 0 and nums[i] < nums[i - 1])
        {
            swap(nums[i], nums[i - 1]);
        }

        if (i + 1 < nums.size() and nums[i] < nums[i + 1])
        {
            swap(nums[i], nums[i + 1]);
        }
    }
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