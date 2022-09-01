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
    int h1, h2, w1, w2;
    int a[15][15], b[15][15];

    cin >> h1 >> w1;
    rep(i, 1, h1 + 1) rep(j, 1, w1 + 1) cin >> a[i][j];
    cin >> h2 >> w2;
    rep(i, 1, h2 + 1) rep(j, 1, w2 + 1) cin >> b[i][j];

    rep(i, 0, 1 << h1)
    {
        rep(j, 0, 1 << w1)
        {
            vector<int> hvec, wvec;
            // 削除する行,列にフラグが立つ
            rep(k, 1, h1 + 1) if ((i & (1 << (k - 1))) == 0) hvec.push_back(k);
            rep(k, 1, w1 + 1) if ((j & (1 << (k - 1))) == 0) wvec.push_back(k);
            if (hvec.size() != h2 || wvec.size() != w2)
                continue;

            bool match = true;
            rep(k, 1, h2 + 1)
            {
                rep(l, 1, w2 + 1)
                {
                    if (a[hvec[k - 1]][wvec[l - 1]] != b[k][l])
                    {
                        match = false;
                        break;
                    }
                }
            }
            if (match)
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}