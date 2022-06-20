#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

int trapWater(vector<int> const &bars)
{
    // Write your code here...
    int l = 0;
    int r = bars.size() - 1;

    int max_left_height = 0;
    int max_right_height = 0;

    int water = 0;

    while (l <= r)
    {
        if (bars[l] < bars[r])
        {
            if (bars[l] > max_left_height)
            {
                max_left_height = bars[l];
            }

            water += max_left_height - bars[l];
            l++;
        }
        else
        {
            if (bars[r] > max_right_height)
            {
                max_right_height = bars[r];
            }

            water += max_right_height - bars[r];
            r--;
        }
    }

    return water;
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