#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

// pair<int, int> findLongestSequence(vector<int> const &nums, int k)
// {
//     // Write your code here...
//     int end = -1;
//     int max_len = 0;
//     list<int> l;
//     int curr_len = 0;

//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (nums[i] == 1)
//         {
//             curr_len++;
//         }
//         else
//         {
//             if (k > 0)
//             {
//                 l.push_back(i);
//                 curr_len++;
//                 k--;
//             }
//             else
//             {
//                 if (l.size() == 0)
//                 {
//                     curr_len = 0;
//                 }
//                 else
//                 {
//                     int idx = l.front();
//                     l.pop_front();
//                     curr_len = i - idx;
//                 }
//             }
//         }

//         if (curr_len > max_len)
//         {
//             end = i;
//             max_len = curr_len;
//         }
//     }

//     if (max_len == 0)
//     {
//         return {-1, -1};
//     }

//     return {end - max_len + 1, end};
// }

pair<int, int> findLongestSequence(vector<int> const &nums, int k)
{
    // Write your code here...
    int left = 0;
    int count = 0;
    int window = 0;
    int end = -1;
    int start = -1;

    for (int right = 0; right < nums.size(); right++)
    {
        if (nums[right] == 0)
        {
            count++;
        }

        while (count > k)
        {
            if (nums[left] == 0)
            {
                count--;
            }
            left++;
        }

        if (right - left + 1 > window)
        {
            window = right - left + 1;
            end = right;
            start = left;
        }
    }

    return {start, end};
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

    vector<int> arr = {1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 0};
    auto p = findLongestSequence(arr, 1);
    cout << p.first << " " << p.second;

    return 0;
}