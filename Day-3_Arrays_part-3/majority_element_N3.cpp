#include <bits/stdc++.h>
using namespace std;
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    unordered_map<int, int> mp;
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        mp[arr[i]] += 1;
    }

    for (auto i : mp)
    {
        if (i.second > (arr.size() / 3))
        {
            ans.push_back(i.first);
        }
    }
    return ans;
}