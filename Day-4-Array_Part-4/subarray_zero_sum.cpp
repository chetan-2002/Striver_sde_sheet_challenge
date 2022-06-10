#include <bits/stdc++.h>
using namespace std;
int LongestSubsetWithZeroSum(vector<int> arr)
{
    int curr_sum = 0;
    unordered_map<int, int> mp;
    int maxi = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        curr_sum += arr[i];
        if (curr_sum == 0)
        {
            maxi = max(maxi, i + 1);
        }
        else
        {
            if (mp.find(curr_sum) != mp.end())
            {
                maxi = max(maxi, i - mp[curr_sum]);
            }
            else
            {
                mp[curr_sum] = i;
            }
        }
    }
    return maxi;
}