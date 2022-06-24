#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

void shuffle(vector<int> &nums, vector<int> &pos)
{
    // Write your code here...
    for (int i = 0; i < nums.size(); i++)
    {
        while (pos[i] != i)
        {
            swap(nums[i], nums[pos[i]]);
            swap(pos[i], pos[pos[i]]);
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