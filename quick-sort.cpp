#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

int solve(vector<int> &nums, int start, int end)
{
    int pivotEl = nums[end];
    int pivot = start;

    for (int i = start; i < end; i++)
    {
        if (nums[i] < pivotEl)
        {
            swap(nums[i], nums[pivot]);
            pivot++;
        }
    }

    swap(nums[end], nums[pivot]);

    return pivot;
}

void quickSort(vector<int> &nums, int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int pivot = solve(nums, start, end);

    quickSort(nums, start, pivot - 1);
    quickSort(nums, pivot + 1, end);
}

void sort(vector<int> &nums)
{
    // Write your code here...
    quickSort(nums, 0, nums.size() - 1);
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