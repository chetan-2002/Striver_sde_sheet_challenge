#include <bits/stdc++.h>
using namespace std;
int calculateMinPatforms(int arr[], int dep[], int n)
{
    // Write your code here.
    sort(arr, arr + n);
    sort(dep, dep + n);
    int ans = 1; // final value
    int curr = 1;
    int i = 1;
    int j = 0;
    while (i < n && j < n)
    {
        if (arr[i] <= dep[j])
        {
            curr += 1;
            i++;
        }
        else
        {
            curr--;
            j++;
        }
        ans = max(ans, curr);
    }
    return ans;
}