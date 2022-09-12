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
    int a[5];
    map<int, int> mp;
    rep(i, 0, 5)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    cout << mp.size() << endl;
}