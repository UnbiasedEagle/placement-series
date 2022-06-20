#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

void reverseInGroup(vector<int> &nums, int m, int i, int j)
{
    // Write your code here...
    if (nums.size() <= 1)
    {
        return;
    }

    if (m <= 1)
    {
        return;
    }

    if (m > j - i + 1)
    {
        return;
    }

    if (i >= j)
    {
        return;
    }

    int start = i;
    int end = i + m - 1;

    while (start <= end and end <= j)
    {
        int l = start;
        int r = end;

        while (l < r)
        {
            swap(nums[l], nums[r]);
            l++;
            r--;
        }

        start = start + m;
        end = start + m - 1;
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