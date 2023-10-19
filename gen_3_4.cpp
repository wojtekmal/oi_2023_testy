#include <bits/stdc++.h>
using namespace std;

int main()
{
    int seed;
    cin >> seed;
    mt_19937_64 ran(seed);

    int n = 500, k = ran() % 5 + 1;
    int a = 501, b = 600;
    
    string s = "";

    for (int i = 0; i < k; i++)
    {
        s.push_back('a' + ran() % 26);
    }

    while (s.size < n)
    {
        ull hash = 0;

        for (int pos = s.size() - k; pos < s.size(); pos++)
        {
            hash = hash * 2137 + s[pos];
        }

        s.push_back('a' + 

