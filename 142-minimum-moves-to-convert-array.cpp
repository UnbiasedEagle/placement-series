#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

int findMinMoves(vector<int> &nums)
{
    // Write your code here...
    int min_moves = 0;

    while (true)
    {
        int no_of_zeroes = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] & 1)
            {
                nums[i]--;
                min_moves++;
            }
            if (nums[i] == 0)
            {
                no_of_zeroes++;
            }
        }

        if (no_of_zeroes == nums.size())
        {
            break;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            nums[i] = nums[i] / 2;
        }

        min_moves++;
    }

    return min_moves;
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

    vector<int> arr = {1, 5, 2, 2, 2, 5, 5, 4};
    cout << findMinMoves(arr);

    return 0;
}