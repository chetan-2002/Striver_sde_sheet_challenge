#include <bits/stdc++.h>
using namespace std;

int jobScheduling(vector<vector<int>> &jobs)
{
    // Write your code here
    int n = jobs.size();
    if (n == 0)
        return 0;
    int profit = 0;
    sort(jobs.begin(), jobs.end(), [](vector<int> &a, vector<int> &b)
         { return a[1] > b[1]; });
    int maxi = jobs[0][0];
    for (auto i : jobs)
    {
        maxi = max(maxi, i[0]);
    }
    vector<int> slots(maxi + 1, -1);
    for (int i = 0; i < n; i++)
    {
        for (int j = jobs[i][0]; j > 0; j--)
        {
            if (slots[j] == -1)
            {
                slots[j] = 1;
                profit += jobs[i][1];
                break;
            }
        }
    }

    return profit;
}
