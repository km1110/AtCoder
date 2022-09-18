#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (ll i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
#define all(x) (x).begin(), (x).end()
#define sortall(v) sort(v.begen(), v.end())

using namespace std;
using ll = long long;

int main()
{
    string s[10];
    rep(i, 0, 10) cin >> s[i];
    int a = 11, b = 0, c = 11, d = 0;

    rep(i, 0, 10)
    {
        rep(j, 0, 10)
        {
            if (s[i].substr(j, 1) == "#")
            {
                a = min(a, i + 1);
                b = max(b, i + 1);
                c = min(c, j + 1);
                d = max(d, j + 1);
            }
        }
    }

    cout << a << " " << b << endl
         << c << " " << d << endl;
}