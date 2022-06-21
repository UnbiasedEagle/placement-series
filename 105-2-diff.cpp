#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

set<pair<int, int>> findPairs(vector<int> const &nums, int k)
{
    set<pair<int, int>> pairs;

    // Write your code here...
    if (nums.size() <= 1)
    {
        return pairs;
    }

    vector<int> arr(nums);

    sort(arr.begin(), arr.end());

    int i = 0;

    while (i < arr.size() - 1)
    {

        if (i > 0 && arr[i] == arr[i - 1])
        {
            i++;
        }
        else
        {
            int to_find;
            if (k >= 0)
            {
                to_find = k + arr[i];
                if (binary_search(arr.begin() + i + 1, arr.end(), to_find))
                {
                    pairs.insert({arr[i], k + arr[i]});
                }
            }
            else
            {
                to_find = abs(k) + arr[i];

                if (binary_search(arr.begin() + i + 1, arr.end(), to_find))
                {
                    pairs.insert({arr[i], arr[i] + abs(k)});
                }
            }
            i++;
        }
    }

    return pairs;
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

    int k = -1;

    auto ds = findPairs(arr, k);

    for (auto p : ds)
    {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}