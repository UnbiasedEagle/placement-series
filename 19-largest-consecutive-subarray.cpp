#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

bool isValid(unordered_set<int> &s, int l, int r, int i, int j)
{

    if (j - i + 1 > s.size())
    {
        return false;
    }

    for (int i = l; i <= r; i++)
    {
        if (s.find(i) == s.end())
        {
            return false;
        }
    }

    return true;
}

vector<int> findLargestSubarray(vector<int> const &nums)
{
    // Write your code here...

    if (nums.size() == 0)
    {
        return {};
    }

    int len = 1;
    int end = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        unordered_set<int> s;
        for (int j = i; j < nums.size(); j++)
        {
            maxi = max(nums[i], maxi);
            mini = min(nums[i], mini);

            s.insert(nums[i]);

            if (isValid(s, mini, maxi, i, j))
            {
                if (j - i + 1 > len)
                {
                    len = j - i + 1;
                    end = j;
                }
            }
        }
    }

    int start = end - len + 1;
    vector<int> ans;
    for (int i = start; i <= end; i++)
    {
        ans.push_back(nums[i]);
    }

    return ans;
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