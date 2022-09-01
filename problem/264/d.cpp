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
    string s, t = "atcoder";
    cin >> s;
    int n = t.size();
    map<char, int> mp;
    rep(i, 0, n) mp[t[i]] = i;
    vector<int> a(n);
    rep(i, 0, n) a[i] = mp[s[i]];
    int ans = 0;
    rep(i, 0, n)
    {
        rep(j, 0, i)
        {
            if (a[i] < a[j])
                ans++;
        }
    }
    cout << ans << endl;
    return 0;
}