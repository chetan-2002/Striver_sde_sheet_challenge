#include <bits/stdc++.h>
using namespace std;
int subarraysXor(vector<int> &arr, int x)
{

    int ans = 0;
    int prefix_xor = 0;
    unordered_map<int, int> mp;
    for (auto i : arr)
    {
        prefix_xor ^= i;
        if (prefix_xor == x)
            ans += 1;
        int h = prefix_xor ^ x;
        if (mp.find(h) != mp.end())
        {
            ans += mp[h];
        }
        mp[prefix_xor] += 1;
    }
    return ans;
}