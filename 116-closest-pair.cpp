#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"
pair<int, int> findClosestPair(vector<int> const &X, vector<int> const &Y, int k)
{
    // Write your code here...
    if (X.size() == 0 or Y.size() == 0)
    {
        return {-1, -1};
    }

    int j = Y.size() - 1;
    int i = 0;

    int diff = INT_MAX;
    int ans1 = -1;
    int ans2 = -1;

    while (j >= 0 and i < X.size())
    {
        int sum = Y[j] + X[i];

        int curr_diff = abs(k - sum);

        if (curr_diff < diff)
        {
            ans1 = X[i];
            ans2 = Y[j];
            diff = curr_diff;
        }

        if (sum > k)
        {
            j--;
        }
        else if (sum < k)
        {
            i++;
        }
        else
        {
            return {ans1, ans2};
        }
    }

    return {ans1, ans2};
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