#include <bits/stdc++.h>
using namespace std;
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n)
{
    int ans = 1;
    int curr = 1;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] == arr[i + 1] - 1)
        {
            curr += 1;
        }
        else if (arr[i] == arr[i + 1])
        {
            curr += 0;
        }
        else
        {
            curr = 1;
        }
        ans = max(ans, curr);
    }
    return ans;
}