#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

void sortArray(vector<int> &nums)
{
    // Write your code here...
    int i = 0;
    int j = nums.size() - 1;

    while (i <= j)
    {
        if (nums[i] == 0)
        {
            i++;
        }
        else
        {
            swap(nums[i], nums[j]);
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