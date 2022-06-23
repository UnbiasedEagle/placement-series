#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

// void rearrange(vector<int> &nums)
// {
//     // Write your code here...
//     vector<int> pos;
//     vector<int> neg;

//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (nums[i] < 0)
//         {
//             neg.push_back(nums[i]);
//         }
//         else if (nums[i] > 0)
//         {
//             pos.push_back(nums[i]);
//         }
//     }

//     int i = 0;
//     int j = 0;
//     int curr = 0;

//     while (i < pos.size() and j < neg.size())
//     {
//         nums[curr] = pos[i];
//         i++;
//         curr++;
//         nums[curr] = neg[j];
//         j++;
//         curr++;
//     }

//     while (i < pos.size())
//     {
//         nums[curr] = pos[i];
//         i++;
//         curr++;
//     }

//     while (j < neg.size())
//     {
//         nums[curr] = neg[j];
//         j++;
//         curr++;
//     }
// }

void rearrange(vector<int> &nums)
{
    // Write your code here...
    int swapIdx = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] < 0)
        {
            swap(nums[i], nums[swapIdx]);
            swapIdx++;
        }
    }

    int l = 0;
    int r = swapIdx;

    while (r < nums.size())
    {
        swap(nums[l], nums[r]);
        l += 2;
        r++;
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
    return 0;
}