#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

int findIndex(vector<int> const &nums)
{
    // Write your code here...
    unordered_map<int, int> Map;

    for (int i = 0; i < nums.size(); i++)
    {
        Map[nums[i]]++;
    }
    int idx = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (Map[nums[i]] > Map[nums[idx]])
        {
            idx = i;
        }
    }

    int element = nums[idx];

    int k = (rand() % Map[element]) + 1;

    int i = 0;

    while (k and i < nums.size())
    {
        if (nums[i] == element)
        {
            k--;
        }
        i++;
    }

    return i - 1;
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