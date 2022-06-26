#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

int getPivot(vector<int> &nums, int start, int end)
{
    int pivot = nums[start];
    int l = start - 1;
    int r = end + 1;

    while (true)
    {
        do
        {
            l++;
        } while (nums[l] < pivot);

        do
        {
            r--;
        } while (nums[r] > pivot);

        if (l >= r)
        {
            return r;
        }

        swap(nums[l], nums[r]);
    }
}

void quickSort(vector<int> &nums, int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int pivot = getPivot(nums, start, end);

    quickSort(nums, start, pivot);
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