#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

vector<int> findBitonicSubarray(vector<int> const &nums)
{
    // Write your code here...
    int i = 0;

    int end = 0;
    int len = 0;
    while (i < nums.size())
    {
        int j = i;

        while (j + 1 < nums.size() and nums[j] < nums[j + 1])
        {
            j++;
        }

        while (j + 1 < nums.size() and nums[j] > nums[j + 1])
        {
            j++;
        }

        if (j - i + 1 > len)
        {
            len = j - i + 1;
            end = j;
        }

        if (i == j)
        {
            i++;
        }
        else
        {
            i = j;
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

    vector<int> arr = {3, 5, 8, 4, 5, 9, 10, 8, 5, 3, 4};

    vector<int> ans = findBitonicSubarray(arr);

    for (auto el : ans)
    {
        cout << el << " ";
    }

    return 0;
}