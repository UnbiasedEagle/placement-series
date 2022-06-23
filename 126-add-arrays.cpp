#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

// vector<int> solve(int num)
// {
//     vector<int> ds;

//     while (num > 0)
//     {
//         ds.push_back(num % 10);
//         num = num / 10;
//     }

//     reverse(ds.begin(), ds.end());
//     return ds;
// }

// vector<int> add(vector<int> const &X, vector<int> const &Y)
// {
//     // Write your code here...
//     int i = 0;
//     int j = 0;
//     vector<int> ans;
//     while (i < X.size() and j < Y.size())
//     {
//         int sum = X[i] + Y[j];

//         vector<int> ds = solve(sum);

//         for (auto el : ds)
//         {
//             ans.push_back(el);
//         }
//         i++;
//         j++;
//     }

//     while (i < X.size())
//     {
//         vector<int> ds = solve(X[i]);

//         for (auto el : ds)
//         {
//             ans.push_back(el);
//         }
//         i++;
//     }
//     while (j < Y.size())
//     {
//         vector<int> ds = solve(Y[j]);

//         for (auto el : ds)
//         {
//             ans.push_back(el);
//         }
//         j++;
//     }

//     return ans;
// }
vector<int> add(vector<int> const &X, vector<int> const &Y)
{
    // Write your code here...
    string str = "";

    int i = 0;
    int j = 0;

    while (i < X.size() and j < Y.size())
    {
        if (X[i] + Y[j] == 0)
        {
            i++;
            j++;
            continue;
        }
        str += to_string(X[i] + Y[j]);
        i++;
        j++;
    }

    while (i < X.size())
    {
        if (X[i] == 0)
        {
            i++;
            continue;
        }

        str += to_string(X[i]);
        i++;
    }

    while (j < Y.size())
    {
        if (Y[j] == 0)
        {
            j++;
            continue;
        }

        str += to_string(Y[j]);
        j++;
    }

    vector<int> ans;

    for (auto ch : str)
    {
        ans.push_back(ch - '0');
    }

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