#include <bits/stdc++.h>
using namespace std;
int merge(vector<int> &nums, int l, int m, int h)
{
    int count = 0;
    int j = m + 1;
    for (int i = l; i <= m; ++i)
    {
        while (j <= h && nums[i] > 2LL * nums[j])
            ++j;
        count += (j - (m + 1));
    }

    vector<int> temp;
    int left = l, right = m + 1;

    while (left <= m && right <= h)
    {
        if (nums[left] <= nums[right])
            temp.push_back(nums[left++]);
        else
            temp.push_back(nums[right++]);
    }

    while (left <= m)
        temp.push_back(nums[left++]);

    while (right <= h)
        temp.push_back(nums[right++]);

    for (int i = l; i <= h; ++i)
    {
        nums[i] = temp[i - l];
    }
    return count;
}
int mergeSort(vector<int> &nums, int l, int h)
{
    if (l >= h)
        return 0;
    int m = (l + h) / 2;
    int count = 0;
    count += mergeSort(nums, l, m);
    count += mergeSort(nums, m + 1, h);
    count += merge(nums, l, m, h);
    return count;
}
int reversePairs(vector<int> &arr, int n)
{
    return mergeSort(arr, 0, n - 1);
}