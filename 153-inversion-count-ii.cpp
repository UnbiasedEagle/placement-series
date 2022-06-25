#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

int findInversionCount(vector<int> const &nums)
{
    // Write your code here...
    if (nums.size() <= 2)
    {
        return 0;
    }

    int count = 0;

    for (int i = 1; i < nums.size() - 1; i++)
    {
        int leftBigger = 0;
        int rightSmaller = 0;

        int a = i - 1;

        while (a >= 0)
        {
            if (nums[a] > nums[i])
            {
                leftBigger++;
            }
            a--;
        }

        int b = i + 1;

        while (b < nums.size())
        {
            if (nums[b] < nums[i])
            {
                rightSmaller++;
            }
            b++;
        }

        if (leftBigger and rightSmaller)
        {
            count += leftBigger * rightSmaller;
        }
    }

    return count;
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