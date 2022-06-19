#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

vector<int> findSubarray(vector<int> const &nums, int k)
{
    vector<int> subarray;

    // Write your code here...
    unordered_map<int, int> Map;

    Map[0] = -1;

    int sum = 0;

    int start = -1;
    int end = -1;

    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];

        if (Map.find(sum - k) != Map.end())
        {
            start = Map[sum - k] + 1;
            end = i;
            break;
        }

        Map[sum] = i;
    }

    if (start == -1)
    {
        return subarray;
    }

    for (int i = start; i <= end; i++)
    {
        subarray.push_back(nums[i]);
    }

    return subarray;
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
    vector<int> arr = {2, 6, 0, 9, 7, 3, 1, 4, 1, 10};
    vector<int> ans = findSubarray(arr, 15);

    for (auto el : ans)
    {
        cout << el << " ";
    }

    return 0;
}