#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

void rearrange(vector<int> &A)
{
    // Write your code here...
    int n = A.size();
    for (int i = 0; i < n; i++)
    {
        int idx = A[i] % n;

        A[idx] = A[idx] + i * n;
    }

    for (int i = 0; i < A.size(); i++)
    {
        A[i] = A[i] / n;
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