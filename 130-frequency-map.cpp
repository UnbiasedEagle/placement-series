#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

unordered_map<int, int> findFrequency(vector<int> &nums)
{
    unordered_map<int, int> freq;
    int n = nums.size();

    // Write your code here...
    for (int i = 0; i < nums.size(); i++)
    {
        int idx = nums[i] % n;

        nums[idx] += n;
    }

    for (int i = 0; i < n; i++)
    {
        nums[i] = nums[i] / n;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > 0)
        {
            freq[i] = nums[i];
        }
    }

    return freq;
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