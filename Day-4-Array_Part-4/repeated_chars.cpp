#include <bits/stdc++.h>
using namespace std;
int uniqueSubstrings(string input)
{
    int i = 0;
    int j = 0;
    set<char> s;
    int max_length = INT_MIN;
    while (j < input.size())
    {
        if (s.find(input[j]) == s.end())
        {
            s.insert(input[j]);

            max_length = max(max_length, j - i + 1);
            j++;
        }
        else
        {
            s.erase(input[i]);
            i++;
        }
    }
    return max_length;
}