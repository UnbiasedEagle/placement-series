#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

pair<int, int> solve(vector<int> &nums, int start, int end)
{
    int pivotEl = nums[end];
    int mid = start;
    while (mid <= end)
    {
        if (nums[mid] < pivotEl)
        {
            swap(nums[start], nums[mid]);
            start++;
            mid++;
        }
        else if (nums[mid] > pivotEl)
        {
            swap(nums[mid], nums[end]);
            end--;
        }
        else
        {
            mid++;
        }
    }

    return {start - 1, mid};
}

void quickSort(vector<int> &nums, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    if (end - start == 1)
    {
        if (nums[end] < nums[start])
        {
            swap(nums[start], nums[end]);
        }
        return;
    }

    auto p = solve(nums, start, end);

    quickSort(nums, start, p.first);
    quickSort(nums, p.second, end);
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