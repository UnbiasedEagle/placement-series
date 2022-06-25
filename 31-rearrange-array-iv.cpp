#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"
void rearrange(vector<int> &nums)
{
    // Write your code here...
    int swapIdx = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] < 0)
        {
            swap(nums[i], nums[swapIdx]);
            swapIdx++;
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