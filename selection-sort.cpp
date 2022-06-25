#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"
void sort(vector<int> &nums)
{
    // Write your code here...

    if (nums.size() <= 1)
    {
        return;
    }

    for (int i = 0; i < nums.size() - 1; i++)
    {
        int minIdx = i;

        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[j] < nums[minIdx])
            {
                minIdx = j;
            }
        }

        swap(nums[i], nums[minIdx]);
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

    vector<int> arr = {};

    sort(arr);

    return 0;
}