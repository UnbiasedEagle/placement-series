#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

// int findDistinctCount(vector<int> const &nums)
// {
//     // Write your code here...
//     int count = 0;

//     unordered_set<int> s;

//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (s.find(abs(nums[i])) == s.end())
//         {
//             count++;
//             s.insert(abs(nums[i]));
//         }
//     }

//     return count;
// }

int findDistinctCount(vector<int> const &nums)
{
    // Write your code here...
    int ans = nums.size();

    int l = 0;
    int r = nums.size() - 1;

    while (l < r)
    {
        while (l < r and nums[l] == nums[l + 1])
        {
            ans--;
            l++;
        }

        while (l < r and nums[r] == nums[r - 1])
        {
            ans--;
            r--;
        }

        if (l == r)
        {
            break;
        }

        int sum = nums[l] + nums[r];

        if (sum == 0)
        {
            ans--;
            l++;
            r--;
        }
        else if (sum > 0)
        {
            r--;
        }
        else
        {
            l++;
        }
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