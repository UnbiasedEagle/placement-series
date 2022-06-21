#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

int get_pivot(int start, int end, vector<int> &nums)
{
    int swapIdx = start;
    int pivotEl = nums[end];

    for (int i = start; i < end; i++)
    {
        if (nums[i] < pivotEl)
        {
            swap(nums[i], nums[swapIdx]);
            swapIdx++;
        }
    }

    swap(nums[end], nums[swapIdx]);
    return swapIdx;
}

int solve(int start, int end, vector<int> &nums, int k)
{
    if (start == end)
    {
        return nums[start];
    }

    int pivot = get_pivot(start, end, nums);

    if (pivot == k)
    {
        return nums[pivot];
    }

    if (pivot > k)
    {
        return solve(start, pivot - 1, nums, k);
    }

    return solve(pivot + 1, end, nums, k);
}

int findKthSmallest(vector<int> const &nums, int k)
{
    // Write your code here...
    vector<int> arr(nums);
    return solve(0, arr.size() - 1, arr, k - 1);
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