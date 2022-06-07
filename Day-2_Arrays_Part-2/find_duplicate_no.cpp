#include <bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int> &arr, int n)
{
    unordered_map<int, int> mp;
    for (auto i : arr)
        mp[i] += 1;
    for (auto i : mp)
    {
        if (i.second > 1)
            return i.first;
    }
    return -1;
}
