#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

// set<vector<int>> getAllSubarrays(vector<int> const &nums, int k)
// {
//     set<vector<int>> subarrays;

//     // Write your code here...

//     for (int i = 0; i < nums.size(); i++)
//     {
//         int sum = 0;
//         for (int j = i; j < nums.size(); j++)
//         {
//             sum += nums[j];

//             if (sum == k)
//             {
//                 vector<int> temp;
//                 for (int k = i; k <= j; k++)
//                 {
//                     temp.push_back(nums[k]);
//                 }
//                 subarrays.insert(temp);
//             }
//         }
//     }

//     return subarrays;
// }

set<vector<int>> getAllSubarrays(vector<int> const &nums, int k)
{
    set<vector<int>> subarrays;

    // Write your code here...
    unordered_map<int, vector<int>> Map;

    Map[0] = {-1};
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];

        if (Map.find(sum - k) != Map.end())
        {
            for (auto el : Map[sum - k])
            {
                vector<int> temp;
                for (int j = el + 1; j <= i; j++)
                {
                    temp.push_back(nums[j]);
                }
                subarrays.insert(temp);
            }
        }

        Map[sum].push_back(i);
    }

    return subarrays;
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