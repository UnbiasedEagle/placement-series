#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

int findMaxSubarrayLength(vector<int> const &X, vector<int> const &Y)
{
    // Write your code here...
    int len = 0;

    int i = 0;

    int sum_x = 0;
    int sum_y = 0;

    unordered_map<int, int> Map;
    Map[0] = -1;

    while (i < X.size())
    {
        sum_x += X[i];
        sum_y += Y[i];

        int diff = sum_x - sum_y;

        if (Map.find(diff) == Map.end())
        {
            Map[diff] = i;
        }
        else
        {
            len = max(len, i - Map[diff]);
        }
        i++;
    }

    return len;
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