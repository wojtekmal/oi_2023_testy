#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "b";
    int pow;
    cin >> pow;

    for (int i = 0; i < pow; i++)
    {
        string s1 = s;

        for (int j = 0; j < s.size(); j++)
        {
            s1[j] ^= 1;
        }

        s += s1;
    }

    for (int i = 0; i < s.size(); i++)
    {
        s[i]--;
    }

    cout << s << "\n";
}
