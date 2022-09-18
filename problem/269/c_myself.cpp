#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (ll i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
#define all(x) (x).begin(), (x).end()
#define sortall(v) sort(v.begen(), v.end())

using namespace std;
using ll = long long;

string toBinary(ll n)
{
    string r;
    while (n != 0)
    {
        r += (n % 2 == 0 ? "0" : "1");
        n /= 2;
    }
    return r;
}

int main()
{
    ll x;
    cin >> x;

    string s = toBinary(x);
    reverse(all(s));
    ll n = s.size();
    vector<string> v;
    set<ll> st;

    rrep(i, n - 1, 0)
    {
        if (s[i] == '1')
        {
            string t = "1";
            rep(j, 0, n - 1 - i) t += "0";
            v.push_back(t);
        }
    }

    n = v.size();

    // {0, 1, ..., n-1} の部分集合の全探索
    for (ll bit = 0; bit < (1 << n); ++bit)
    {
        vector<int> S;
        for (ll i = 0; i < n; ++i)
        {
            if (bit & (1 << i))
            { // 列挙に i が含まれるか
                S.push_back(i);
            }
        }

        ll ans = 0;
        for (ll i = 0; i < (int)S.size(); ++i)
        {
            ll ss = v[S[i]].size() - 1;
            ans += pow(2, ss);
        }
        st.insert(ans);
    }
    for (auto x : st)
    {
        cout << x << endl;
    }
}
