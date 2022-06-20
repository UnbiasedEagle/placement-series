#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

int findMaxProfit(vector<int> const &price)
{
    // Write your code here...
    int max_profit = 0;

    for (int i = 1; i < price.size(); i++)
    {
        if (price[i] > price[i - 1])
        {
            max_profit += price[i] - price[i - 1];
        }
    }

    return max_profit;
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