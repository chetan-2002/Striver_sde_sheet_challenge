#include <bits/stdc++.h>
using namespace std;
struct meeting
{
    int start;
    int end;
    int pos;
};
int maximumActivities(vector<int> &start, vector<int> &end)
{
    // Write your code here.
    int n = start.size();
    meeting meet[n];
    for (int i = 0; i < n; i++)
    {
        meet[i].start = start[i];
        meet[i].end = end[i];
        meet[i].pos = i + 1;
    }
    sort(meet, meet + n, [](struct meeting m1, meeting m2)
         {
         if (m1.end < m2.end) return true;
         else if (m1.end > m2.end) return false;
         else if (m1.pos < m2.pos) return true;
         return false; });
    int prev = meet[0].end;
    vector<int> ans;
    ans.push_back(meet[0].pos);
    for (int i = 1; i < n; i++)
    {
        if (meet[i].start >= prev)
        {
            prev = meet[i].end;
            ans.push_back(meet[i].pos);
        }
    }
    //     sort(ans.begin(),ans.end());
    return ans.size();
}