#include <bits/stdc++.h>
using namespace std;
void f(int ind, vector<int> &ans, int n, int sum, vector<int> &num)
{
    if (ind == n)
    {
        ans.push_back(sum);
        return;
    }
    f(ind + 1, ans, n, sum + num[ind], num);
    f(ind + 1, ans, n, sum, num);
}
vector<int> subsetSum(vector<int> &num)
{
    // Write your code here.
    int n = num.size();
    vector<int> ans;
    f(0, ans, n, 0, num);
    sort(ans.begin(), ans.end());
    return ans;
}