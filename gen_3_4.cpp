#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
const int alphabet_size = 15;

int main()
{
    int seed;
    cin >> seed;
    mt19937 ran(seed);

    int n = 1000000, k = ran() % 5 + 1;
    int a = 501, b = 600;
    
    string s = "";

    for (int i = 0; i < k; i++)
    {
        s.push_back('a' + ran() % alphabet_size);
    }

    while (s.size() < n)
    {
        int hash = 0;

        for (int pos = s.size() - k; pos < s.size(); pos++)
        {
            hash = hash * 31 + s[pos];
        }
        
        mt19937 ran2(hash + seed);
        hash = ran2() % alphabet_size + alphabet_size;

        s.push_back('a' + hash % alphabet_size);
    }

    cout << n << " " << k << " " << a << " " << b << "\n" << s << "\n";
}
