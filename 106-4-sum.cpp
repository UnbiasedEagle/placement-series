#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

set<vector<int>> findQuadruplets(vector<int> const &nums, int target)
{
    set<vector<int>> quadruplets;

    // Write your code here...
    vector<int> arr(nums);

    if (nums.size() <= 3)
    {
        return quadruplets;
    }

    sort(arr.begin(), arr.end());

    int i = 0;

    while (i < arr.size())
    {
        int j = i + 1;

        while (j < arr.size())
        {
            int sum = arr[i] + arr[j];

            int req = target - sum;

            int l = j + 1;
            int r = arr.size() - 1;

            while (l < r)
            {
                int curr = arr[l] + arr[r];

                if (curr == req)
                {
                    quadruplets.insert({arr[i], arr[j], arr[l], arr[r]});
                    l++;
                    r--;

                    while (l < r and arr[l] == arr[l - 1])
                    {
                        l++;
                    }

                    while (l < r and arr[r] == arr[r + 1])
                    {
                        r--;
                    }
                }
                else if (curr > req)
                {
                    r--;
                }
                else
                {
                    l++;
                }
            }
            j++;
            while (j < arr.size() and arr[j] == arr[j - 1])
            {
                j++;
            }
        }
        i++;
        while (i < arr.size() and arr[i] == arr[i - 1])
        {
            i++;
        }
    }

    return quadruplets;
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