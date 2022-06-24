#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"
int getCount(vector<int> const &nums)
{
    // Write your code here...
    if (nums.size() <= 1)
    {
        return 0;
    }

    int r = 1;
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (i == r)
        {
            r++;
        }

        while (r < nums.size() and nums[r] > nums[r - 1])
        {
            r++;
        }

        ans += r - i - 1;
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
    vector<int> arr = {1, 2, 4, 4, 5};

    cout << getCount(arr);

    return 0;
}