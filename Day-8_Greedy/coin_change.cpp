#include <bits/stdc++.h>
using namespace std;
int findMinimumCoins(int amount)
{
    // Write your code here
    vector<int> a = {1000, 500, 100, 50, 20, 10, 5, 2, 1};
    int coins = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (amount >= a[i])
        {
            coins += amount / a[i];
            amount -= (amount / a[i]) * a[i];
        }
        if (amount == 0)
            break;
    }
    return coins;
}
