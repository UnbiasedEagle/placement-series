#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

void merge(vector<int> &nums, int start, int mid, int end)
{
    vector<int> ds;

    int i = start;
    int j = mid + 1;

    while (i <= mid and j <= end)
    {
        if (nums[i] <= nums[j])
        {
            ds.push_back(nums[i++]);
        }
        else
        {
            ds.push_back(nums[j++]);
        }
    }

    while (i <= mid)
    {
        ds.push_back(nums[i++]);
    }
    while (j <= end)
    {
        ds.push_back(nums[j++]);
    }

    for (int k = 0; k < ds.size(); k++)
    {
        nums[start + k] = ds[k];
    }
}

void mergeSort(vector<int> &nums, int low, int high)
{
    // left half and right half with m elements
    for (int m = 1; m <= high - low; m = m * 2)
    {
        // starting point of next subarray
        for (int i = low; i <= high; i += 2 * m)
        {
            int from = i;
            int mid = i + m - 1;
            int end = min(i + 2 * m - 1, high);

            merge(nums, from, mid, end);
        }
    }
}

void sort(vector<int> &nums)
{
    mergeSort(nums, 0, nums.size() - 1);
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