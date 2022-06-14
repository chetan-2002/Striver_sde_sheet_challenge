#include <bits/stdc++.h>
using namespace std;
long getTrappedWater(long *arr, int n)
{
    long *prefix = new long[n];
    long *suffix = new long[n];
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = max(prefix[i - 1], arr[i]);
    }
    suffix[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        suffix[i] = max(suffix[i + 1], arr[i]);
    }
    long waterTrapped = 0;
    for (int i = 0; i < n; i++)
    {
        waterTrapped += min(prefix[i], suffix[i]) - arr[i];
    }
    return waterTrapped;
}