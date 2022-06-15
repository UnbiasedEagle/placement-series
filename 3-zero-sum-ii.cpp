#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

// set<vector<int>> getAllZeroSumSubarrays(vector<int> const &nums)
// {
//     set<vector<int>> subarrays;

//     // Write your code here...

//     for (int i = 0; i < nums.size(); i++)
//     {
//         int sum = 0;
//         for (int j = i; j < nums.size(); j++)
//         {
//             sum += nums[j];

//             if (sum == 0)
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

void getAllZeroSumSubarrays(vector<int> const &nums)
{
    multimap<int, int> Map;

    Map.insert({0, -1});

    int sum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];

        if (Map.find(sum) != Map.end())
        {
            auto it = Map.find(sum);

            while (it != Map.end() and it->first == sum)
            {
                cout << (it->second + 1) << " " << i << endl;
                it++;
            }
        }

        Map.insert({sum, i});
    }
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

    vector<int> arr = {3, 4, -7, 3, 1, 3, 1, -4, -2, -2};

    getAllZeroSumSubarrays(arr);

    return 0;
}