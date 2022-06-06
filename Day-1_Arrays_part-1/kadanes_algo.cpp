#include <bits/stdc++.h>
using namespace std;
long long maxSubarraySum(int arr[], int n)
{
    long long int sum = 0;
    long long int max_sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        max_sum = max(max_sum, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return max_sum;
}