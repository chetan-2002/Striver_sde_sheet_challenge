#include <bits/stdc++.h>
using namespace std;
int findMajorityElement(int arr[], int n)
{
    // Write your code here.
    int candidate = -1;
    int votes = 0;
    for (int i = 0; i < n; i++)
    {
        if (votes == 0)
        {
            candidate = arr[i];
            votes += 1;
        }
        else
        {
            if (arr[i] == candidate)
            {
                votes += 1;
            }
            else
            {
                votes -= 1;
            }
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (candidate == arr[i])
        {
            count += 1;
        }
    }
    if (count > n / 2)
    {
        return candidate;
    }
    return -1;
}