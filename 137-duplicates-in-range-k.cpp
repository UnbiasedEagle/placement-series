#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

bool hasDuplicate(vector<int> const &nums, int k)
{
    // Write your code here...
    int n = nums.size();
    k = k + 1;
    int end = min(k, n);
    unordered_set<int> s;
    for (int i = 0; i < end; i++)
    {
        if (s.find(nums[i]) != s.end())
        {

            return true;
        }
        s.insert(nums[i]);
    }

    for (int i = k; i < nums.size(); i++)
    {
        s.erase(nums[i - k]);

        if (s.find(nums[i]) != s.end())
        {

            return true;
        }
        s.insert(nums[i]);
    }

    return false;
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

    vector<int> arr = {5, 6, 8, 2, 4, 6, 9};

    cout << hasDuplicate(arr, 2);

    return 0;
}