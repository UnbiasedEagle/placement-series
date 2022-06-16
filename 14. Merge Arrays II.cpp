#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

void merge(vector<int> &X, vector<int> &Y)
{
    // Write your code here...

    int swapIdx = X.size() - 1;

    int i = X.size() - 1;

    while (i >= 0)
    {
        if (X[i] != 0)
        {
            swap(X[i], X[swapIdx]);
            swapIdx--;
        }
        i--;
    }

    i = swapIdx + 1;
    int j = 0;
    int curr = 0;
    while (i < X.size() and j < Y.size())
    {
        if (X[i] < Y[j])
        {
            X[curr] = X[i];
            i++;
        }
        else
        {
            X[curr] = Y[j];
            j++;
        }
        curr++;
    }

    while (j < Y.size())
    {
        X[curr] = Y[j];
        j++;
        curr++;
    }
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