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
    string s, t;
    cin >> s >> t;

    int n = min(s.size(), t.size());

    rep(i, 0, n)
    {
        if (s[i] != t[i])
        {
            cout << "No" << endl;
            return 0;
        }
    }
    if (s.size() > t.size())
    {
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
    return 0;
}
