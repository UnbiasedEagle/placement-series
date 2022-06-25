#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

bool solve(vector<int> const &S, int n, int a, int b, int c, vector<int> &arr)
{
    if (a == 0 and b == 0 and c == 0)
    {
        return true;
    }

    if (n < 0)
    {
        return false;
    }

    bool A = false;
    if (a - S[n] >= 0)
    {
        arr[n] = 1;
        A = solve(S, n - 1, a - S[n], b, c, arr);
    }

    bool B = false;
    if (A == false and b - S[n] >= 0)
    {
        arr[n] = 2;
        B = solve(S, n - 1, a, b - S[n], c, arr);
    }

    bool C = false;
    if (A == false and B == false and c - S[n] >= 0)
    {
        arr[n] = 3;
        C = solve(S, n - 1, a, b, c - S[n], arr);
    }

    return A || B || C;
}

vector<vector<int>> partition(vector<int> const &S)
{
    // Write your code here...
    int sum = accumulate(S.begin(), S.end(), 0);
    int n = S.size();
    vector<int> arr(n);
    bool result = n >= 3 && sum % 3 && solve(S, n - 1, sum / 3, sum / 3, sum / 3, arr);

    vector<vector<int>> ans(3);

    if (!result)
    {
        return {};
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == i + 1)
            {
                ans[i].push_back(S[j]);
            }
        }
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