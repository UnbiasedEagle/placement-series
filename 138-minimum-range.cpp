#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

// pair<int, int> findMinRange(vector<int> const &X, vector<int> const &Y, vector<int> const &Z)
// {
//     // Write your code here...

//     if (X.size() == 0 or Y.size() == 0 or Z.size() == 0)
//     {
//         return {-1, -1};
//     }

//     vector<pair<int, int>> ds;

//     for (int i = 0; i < X.size(); i++)
//     {
//         ds.push_back({X[i], 0});
//     }

//     for (int i = 0; i < Y.size(); i++)
//     {
//         ds.push_back({Y[i], 1});
//     }

//     for (int i = 0; i < Z.size(); i++)
//     {
//         ds.push_back({Z[i], 2});
//     }

//     int start = -1;
//     int end = -1;
//     int r = 0;
//     int countX = 0;
//     int countY = 0;
//     int countZ = 0;

//     sort(ds.begin(), ds.end());
//     for (int i = 0; i < ds.size(); i++)
//     {

//         while (r < ds.size() and (countX == 0 or countY == 0 or countZ == 0))
//         {
//             if (ds[r].second == 0)
//             {
//                 countX++;
//             }
//             else if (ds[r].second == 1)
//             {
//                 countY++;
//             }
//             else if (ds[r].second == 2)
//             {
//                 countZ++;
//             }
//             r++;
//         }

//         if (countX > 0 and countY > 0 and countZ > 0)
//         {
//             if (start == -1)
//             {
//                 start = ds[i].first;
//                 end = ds[r - 1].first;
//             }
//             else
//             {
//                 int start1 = ds[i].first;
//                 int end1 = ds[r - 1].first;

//                 if (end1 - start1 < end - start)
//                 {
//                     start = start1;
//                     end = end1;
//                 }
//             }
//         }

//         if (ds[i].second == 0)
//         {
//             countX--;
//         }
//         else if (ds[i].second == 1)
//         {
//             countY--;
//         }
//         else if (ds[i].second == 2)
//         {
//             countZ--;
//         }

//         if (i == r)
//         {
//             r++;
//         }
//     }

//     return {start, end};
// }

pair<int, int> findMinRange(vector<int> const &X, vector<int> const &Y, vector<int> const &Z)
{
    // Write your code here...
    int diff = INT_MAX;

    int i = 0;
    int j = 0;
    int k = 0;

    int high = -1;
    int low = -1;

    while (i < X.size() and j < Y.size() and k < Z.size())
    {
        int mini = min(min(X[i], Y[j]), Z[k]);
        int maxi = max(max(X[i], Y[j]), Z[k]);

        if (diff > maxi - mini)
        {
            high = maxi;
            low = mini;
            diff = maxi - mini;
        }

        if (X[i] == mini)
        {
            i++;
        }
        else if (Y[j] == mini)
        {
            j++;
        }
        else
        {
            k++;
        }
    }

    return {low, high};
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

    vector<int> X = {1};
    vector<int> Y = {1, 2};
    vector<int> Z = {0, 1};

    auto p = findMinRange(X, Y, Z);

    cout << p.first << " " << p.second << endl;

    return 0;
}