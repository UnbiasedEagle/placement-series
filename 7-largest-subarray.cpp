#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

vector<int> findLargestSubarray(vector<int> const &nums)
{
    vector<int> largestSubarray;

    vector<int> arr(nums);

    // Write your code here...
    for (int i = 0; i < nums.size(); i++)
    {
        if (arr[i] == 0)
        {
            arr[i] = -1;
        }
    }

    unordered_map<int, int> Map;

    Map[0] = -1;

    int sum = 0;
    int len = 0;
    int end = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];

        if (Map.find(sum) != Map.end())
        {
            if (i - Map[sum] > len)
            {
                len = i - Map[sum];
                end = i;
            }
        }

        if (Map.find(sum) == Map.end())
        {
            Map[sum] = i;
        }
    }

    if (len == 0)
    {
        return largestSubarray;
    }

    int start = end - len + 1;

    for (int i = start; i <= end; i++)
    {
        if (arr[i] == -1)
        {
            largestSubarray.push_back(0);
        }
        else
        {
            largestSubarray.push_back(1);
        }
    }

    return largestSubarray;
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