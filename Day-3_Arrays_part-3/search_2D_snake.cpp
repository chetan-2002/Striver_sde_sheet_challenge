#include <bits/stdc++.h>
#include <vector>
using namespace std;
bool findTargetInMatrix(vector<vector<int>> &matrix, int m, int n, int target)
{
    // Write your code here.
    int r = matrix.size();
    int c = matrix[0].size();
    bool isTrue = false;
    int i = 0, j = c - 1;
    while (i < r && j >= 0)
    {
        if (matrix[i][j] == target)
        {
            isTrue = true;
            return isTrue;
        }
        else if (matrix[i][j] > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return isTrue;
}