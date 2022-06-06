#include <bits/stdc++.h>
using namespace std;
int maximumProfit(vector<int> &prices)
{
    int n = prices.size();
    vector<int> right_max(n);

    right_max[n - 1] = prices[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        right_max[i] = max(prices[i], right_max[i + 1]);
    }
    for (int i = 0; i < n; i++)
    {
        prices[i] = right_max[i] - prices[i];
    }
    return *max_element(prices.begin(), prices.end());
}