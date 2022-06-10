#include <bits/stdc++.h>
using namespace std;
string fourSum(vector<int> arr, int target, int n)
{
    if (arr.size() < 4)
        return "No";
    unordered_map<int, pair<int, int>> mp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            mp[arr[i] + arr[j]] = {i, j};
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = arr[i] + arr[j];
            if (mp.find(target - sum) != mp.end())
            {
                auto q = mp[target - sum];
                if (i != q.first && i != q.second && j != q.first && j != q.second)
                {
                    return "Yes";
                }
            }
        }
    }
    return "No";
}
