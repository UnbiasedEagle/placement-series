#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"
set<set<pair<int, int>>> findSymmetricPairs(set<pair<int, int>> const &pa)
{

    set<set<pair<int, int>>> result;

    // Write your code here...
    set<pair<int, int>> pairs;

    for (auto el : pa)
    {
        pairs.insert(el);
    }

    for (auto p : pa)
    {
        int x = p.first;
        int y = p.second;

        if (pairs.find({y, x}) != pairs.end())
        {
            set<pair<int, int>> ds;
            ds.insert({x, y});
            ds.insert({y, x});
            result.insert(ds);
            auto it = pairs.find({x, y});
            pairs.erase(it);
        }
    }

    return result;
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