#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

int findMinPlatforms(vector<double> arrival, vector<double> departure)
{
    // Write your code here...
    sort(arrival.begin(), arrival.end());
    sort(departure.begin(), departure.end());

    int i = 0;

    int j = 0;

    int curr = 0;
    int maxi = 0;
    while (i < arrival.size())
    {
        if (departure[j] > arrival[i])
        {
            curr++;
            maxi = max(maxi, curr);
            i++;
        }
        else
        {
            curr--;
            j++;
        }
    }

    return maxi;
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

    vector<double> arrival = {2.00, 2.10, 3.00, 3.20, 3.50, 5.00};
    vector<double> departure = {2.30, 3.40, 3.20, 4.30, 4.00, 5.20};
    cout << findMinPlatforms(arrival, departure);

    return 0;
}