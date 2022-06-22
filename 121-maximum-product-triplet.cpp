#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

vector<int> findTriplet(vector<int> const &nums)
{

    // Write your code here...

    if (nums.size() <= 2)
    {
        return {};
    }
    int max_idx1 = 0;
    int max_idx2 = -1;
    int max_idx3 = -1;

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] > nums[max_idx1])
        {
            max_idx3 = max_idx2;
            max_idx2 = max_idx1;
            max_idx1 = i;
        }
        else if (max_idx2 == -1 or nums[i] > nums[max_idx2])
        {
            max_idx3 = max_idx2;
            max_idx2 = i;
        }
        else if (max_idx3 == -1 or nums[i] > nums[max_idx3])
        {
            max_idx3 = i;
        }
    }

    int min_idx1 = 0;
    int min_idx2 = -1;

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] < nums[min_idx1])
        {
            min_idx2 = min_idx1;
            min_idx1 = i;
        }
        else if (min_idx2 == -1 or nums[i] < nums[min_idx2])
        {
            min_idx2 = i;
        }
    }

    if (nums[min_idx1] * nums[min_idx2] * nums[max_idx1] >= nums[max_idx1] * nums[max_idx2] * nums[max_idx3])
    {
        return {nums[min_idx1], nums[min_idx2], nums[max_idx1]};
    }

    return {nums[max_idx1], nums[max_idx2], nums[max_idx3]};
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