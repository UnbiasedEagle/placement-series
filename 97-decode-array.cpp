#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

vector<int> decode(vector<int> const &nums)
{
    // Write your code here...
    int l = 1;
    int r = sqrt(2 * nums.size());
    int ans;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if ((mid * (mid + 1)) / 2 == nums.size())
        {
            ans = mid + 1;
            break;
        }
        else if ((mid * (mid + 1)) / 2 > nums.size())
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    vector<int> ds(ans);

    if (nums.size() == 2)
    {
        return {0, nums[0]};
    }

    int num1 = nums[0] - nums[1];
    int num2 = nums[ans - 1];

    int y1 = (num1 + num2) / 2;
    int y0 = nums[0] - y1;

    ds[0] = y0;

    for (int i = 1; i < ans; i++)
    {
        ds[i] = nums[i - 1] - ds[0];
    }

    return ds;
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

    vector<int> arr = {7, 8, 8, 9, 10, 9, 9, 10, 11, 10, 11, 12, 11, 12, 13};

    vector<int> ans = decode(arr);

    for (auto el : ans)
    {
        cout << el << " ";
    }

    return 0;
}