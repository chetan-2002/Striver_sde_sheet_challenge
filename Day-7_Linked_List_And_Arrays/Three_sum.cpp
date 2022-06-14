#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> findTriplets(vector<int> nums, int n, int K)
{
    // Write your code here.
    sort(nums.begin(), nums.end());
    set<vector<int>> p;
    for (int i = 0; i < nums.size(); i++)
    {
        int j = i + 1, k = nums.size() - 1;
        while (j < k)
        {

            int sum = nums[i] + nums[j] + nums[k];
            if (sum > K)
                k--;
            else if (sum < K)
                j++;
            else
            {
                p.insert({nums[i], nums[j], nums[k]});
                j++;
                k--;
            }
        }
    }
    vector<vector<int>> ans(p.begin(), p.end());
    return ans;
}