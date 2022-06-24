#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

int findMaxLenSubseq(vector<int> &nums)
{
    // Write your code here...

    if (nums.size() == 0)
    {
        return 0;
    }

    unordered_set<int> s;

    for (int i = 0; i < nums.size(); i++)
    {
        s.insert(nums[i]);
    }

    int max_len = 1;

    for (int i = 0; i < nums.size(); i++)
    {
        if (s.find(nums[i] - 1) == s.end())
        {
            int count = 0;
            int el = nums[i];

            while (s.find(el) != s.end())
            {
                count++;
                el++;
            }

            max_len = max(max_len, count);
        }
    }

    return max_len;
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