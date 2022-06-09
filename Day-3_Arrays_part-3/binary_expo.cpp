#include <bits/stdc++.h>
using namespace std;
int modularExponentiation(int x, int n, int m)
{
    long long int ans = 1;
    long long int _x = x;
    while (n > 0)
    {
        if ((n & 1))
        {
            ans = ((ans) * (_x % m)) % m;
        }
        _x = (_x * _x) % m;
        n >>= 1;
    }
    return ans;
}