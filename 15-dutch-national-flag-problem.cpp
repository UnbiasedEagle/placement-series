#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

void sortArray(vector<int> &nums)
{
    // Write your code here...
    int l = 0;
    int r = nums.size() - 1;

    int m = 0;

    while (m <= r)
    {
        if (nums[m] == 0)
        {
            swap(nums[m], nums[l]);
            l++;
            m++;
        }
        else if (nums[m] == 1)
        {
            m++;
        }
        else
        {
            swap(nums[m], nums[r]);
            r--;
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