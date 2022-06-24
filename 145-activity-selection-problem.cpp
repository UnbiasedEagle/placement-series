#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

set<pair<int, int>> selectActivity(vector<pair<int, int>> activities)
{
    // Write your code here...
    sort(activities.begin(), activities.end());

    set<pair<int, int>> ans;

    if (activities.size() == 0)
    {
        return ans;
    }

    int start = activities[0].first;
    int end = activities[0].second;

    for (int i = 1; i < activities.size(); i++)
    {
        if (activities[i].first >= end)
        {
            ans.insert({start, end});
            start = activities[i].first;
            end = activities[i].second;
        }
        else if (activities[i].second < end)
        {
            start = activities[i].first;
            end = activities[i].second;
        }
    }

    ans.insert({start, end});

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
    return 0;
}