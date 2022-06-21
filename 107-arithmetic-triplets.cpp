#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"
// set<vector<int>> findTriplets(vector<int> const &nums)
// {
//     set<vector<int>> triplets;

//     // Write your code here...
//     unordered_set<int> s;

//     for (int i = 0; i < nums.size(); i++)
//     {
//         for (int j = i + 1; j < nums.size(); j++)
//         {
//             int diff = nums[j] - nums[i];
//             if (s.find(nums[i] - diff) != s.end())
//             {
//                 triplets.insert({nums[i] - diff, nums[i], nums[j]});
//             }
//         }
//         s.insert(nums[i]);
//     }

//     return triplets;
// }

set<vector<int>> findTriplets(vector<int> const &nums)
{
    set<vector<int>> triplets;

    if (nums.size() <= 2)
    {
        return triplets;
    }

    // Write your code here...

    for (int j = 1; j < nums.size() - 1; j++)
    {
        int i = j - 1;
        int k = j + 1;

        while (i >= 0 and k < nums.size())
        {
            if ((nums[i] + nums[k]) == (2 * nums[j]))
            {
                triplets.insert({nums[i], nums[j], nums[k]});
                i--;
                k++;
            }
            else if ((nums[i] + nums[k]) < (2 * nums[j]))
            {
                k++;
            }
            else
            {
                i--;
            }
        }
    }

    return triplets;
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