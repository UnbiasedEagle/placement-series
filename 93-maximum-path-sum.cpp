#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

int findMaxPathSum(vector<int> const &X, vector<int> const &Y)
{
    // Write your code here...

    int i = 0;
    int j = 0;
    int sum_x = 0;
    int sum_y = 0;

    int total_sum = 0;

    while (i < X.size() and j < Y.size())
    {
        if (X[i] < Y[j])
        {
            sum_x += X[i];
            i++;
        }
        else if (Y[j] < X[i])
        {
            sum_y += Y[j];
            j++;
        }
        else
        {
            total_sum += max(sum_x, sum_y) + X[i];
            i++;
            j++;
            sum_x = 0;
            sum_y = 0;
        }
    }

    while (i < X.size())
    {
        sum_x += X[i];
        i++;
    }

    while (j < Y.size())
    {
        sum_y += Y[j];
        j++;
    }

    total_sum += max(sum_x, sum_y);

    return total_sum;
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

    vector<int> arr1 = {3, 6, 7, 8, 10, 12, 15, 18, 100};
    vector<int> arr2 = {1, 2, 3, 5, 7, 9, 10, 11, 15, 16, 18, 25, 50};

    cout << findMaxPathSum(arr1, arr2);

    return 0;
}