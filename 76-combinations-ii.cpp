#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

void solve(int n, int start, set<vector<int>> &combinations, vector<int> ds)
{
    if (n == 0)
    {
        combinations.insert(ds);
        return;
    }

    if (n < 0)
    {
        return;
    }

    for (int i = start; i <= n; i++)
    {
        ds.push_back(i);
        solve(n - i, i, combinations, ds);
        ds.pop_back();
    }
}

set<vector<int>> findCombinations(int n)
{
    set<vector<int>> combinations;

    // Write your code here...
    vector<int> ds;

    solve(n, 1, combinations, ds);

    return combinations;
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

    set<vector<int>> s = findCombinations(5);

    for (auto p : s)
    {
        for (auto el : p)
        {
            cout << el << " ";
        }
        cout << endl;
    }

    return 0;
}