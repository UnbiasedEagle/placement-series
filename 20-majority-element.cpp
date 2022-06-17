#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

int findMajorityElement(vector<int> &nums)
{
    // Write your code here...
    int el = nums[0];
    int count = 1;

    for (int i = 1; i < nums.size(); i++)
    {
        if (el == nums[i])
        {
            count++;
        }
        else
        {
            count--;
            if (count == 0)
            {
                el = nums[i];
                count = 1;
            }
        }
    }

    return el;
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