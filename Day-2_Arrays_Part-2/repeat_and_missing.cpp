#include <bits/stdc++.h>
using namespace std;
pair<int, int> missingAndRepeating(vector<int> &arr, int n)
{
    vector<int> vec(n + 1);
    for (auto i : arr)
        vec[i] += 1;
    pair<int, int> ans;
    for (int i = 1; i < vec.size(); i++)
    {
        if (vec[i] == 0)
        {
            ans.first = i;
        }
        if (vec[i] > 1)
        {
            ans.second = i;
        }
    }
    return ans;
}
