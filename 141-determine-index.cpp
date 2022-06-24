#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

int findIndex(vector<int> const &nums)
{
    // Write your code here...
    if (nums.size() <= 2)
    {
        return -1;
    }

    int i = 1;
    int leftMax = nums[0];
    int r = 2;
    while (i < nums.size() - 1)
    {
        if (nums[i] <= leftMax)
        {
            i++;
        }
        else
        {
            leftMax = nums[i];
            if (r <= i)
            {
                r = i + 1;
            }
            while (r < nums.size() and nums[i] < nums[r])
            {
                r++;
            }

            if (r == nums.size())
            {
                return i;
            }
        }
    }

    return -1;
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

    vector<int> arr = {1, 2, 3, 4, 5};

    cout << findIndex(arr);

    return 0;
}