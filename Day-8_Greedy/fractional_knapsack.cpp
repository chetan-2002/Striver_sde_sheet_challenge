#include <bits/stdc++.h>
using namespace std;
double maximumValue(vector<pair<int, int>> &items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    double final_value = 0.0;
    sort(items.begin(), items.end(), [](pair<int, int> &a, pair<int, int> &b)
         { return a.second * 1.0 / a.first * 1.0 > b.second * 1.0 / b.first * 1.0; });
    int curr_weight = 0;
    for (int i = 0; i < items.size(); i++)
    {

        if (curr_weight + items[i].first <= w)
        {
            curr_weight += items[i].first;
            final_value += items[i].second;
        }
        else
        {
            int remain = w - curr_weight;
            final_value += (items[i].second * 1.0 / items[i].first * 1.0) * remain;
            break;
        }
    }
    return final_value;
}