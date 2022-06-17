#include <bits/stdc++.h>
using namespace std;
void f(int ind, vector<int> &arr, int n, vector<int> &ds, vector<vector<int>> &ans, int k)
{
    if (ind == n)
    {
        int sum = 0;
        for (auto &i : ds)
        {
            sum += i;
        }
        if (sum == k && ds.size() > 0)
        {
            ans.push_back(ds);
        }
        return;
    }
    ds.push_back(arr[ind]);
    f(ind + 1, arr, n, ds, ans, k);
    ds.pop_back();

    f(ind + 1, arr, n, ds, ans, k);
}
vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    vector<int> ds;
    vector<vector<int>> ans;
    f(0, arr, n, ds, ans, k);
    return ans;
}