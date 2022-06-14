#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &arr, int n)
{
    // Write your code here.
    int count = 1;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] != arr[i - 1])
            count += 1;
    }
    return count;
}