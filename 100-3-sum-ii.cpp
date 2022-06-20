#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

vector<int> findTriplets(vector<int> &nums, int k)
{
    // Write your code here...

    sort(nums.begin(), nums.end());

    int i = 0;

    while (i < nums.size())
    {
        int l = i + 1;
        int r = nums.size() - 1;

        while (l < r)
        {
            int sum = nums[i] + nums[l] + nums[r];

            if (sum == k)
            {
                return {nums[i], nums[l], nums[r]};
            }
            else if (sum > k)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
        i++;
    }

    return {};
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