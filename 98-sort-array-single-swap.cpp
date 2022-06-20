#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

void sortArray(vector<int> &nums)
{
    // Write your code here...

    if (nums.size() == 0)
    {
        return;
    }

    int l = -1;
    int r = -1;

    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] > nums[i + 1])
        {
            if (l == -1)
            {
                l = i;
                r = i + 1;
            }
            else
            {
                r = i + 1;
            }
        }
    }

    if (l == -1)
    {
        return;
    }

    swap(nums[l], nums[r]);
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