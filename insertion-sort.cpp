#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

void sort(vector<int> &nums)
{
    // Write your code here...
    for (int i = 1; i < nums.size(); i++)
    {
        int j = i - 1;

        while (j >= 0 and nums[j] > nums[j + 1])
        {
            swap(nums[j], nums[j + 1]);
            j--;
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