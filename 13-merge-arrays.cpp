#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

void merge(vector<int> &X, vector<int> &Y)
{
    // Write your code here...
    for (int i = 0; i < X.size(); i++)
    {
        if (X[i] > Y[0])
        {
            swap(X[i], Y[0]);

            int k = 1;
            while (k < Y.size() and Y[k] < Y[k - 1])
            {
                swap(Y[k], Y[k - 1]);
                k++;
            }
        }
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