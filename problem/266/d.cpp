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
    int n;
    cin >> n;
    ll x[100001] = {0}, a[100001] = {0};
    ll dp[5][100001] = {0};

    rep(i, 0, n)
    {
        int t, xx, aa;
        cin >> t >> xx >> aa;
        x[t] = xx;
        a[t] = aa;
    }

    rep(i, 1, 5)
    {
        dp[i][0] = -1e18;
    }

    rep(t, 1, 100001)
    {
        rep(i, 0, 5)
        {
            dp[i][t] = dp[i][t - 1];
            if (i != 0)
                dp[i][t] = max(dp[i][t], dp[i - 1][t - 1]);
            if (i != 4)
                dp[i][t] = max(dp[i][t], dp[i + 1][t - 1]);
        }
        dp[x[t]][t] += a[t];
    }

    ll ans = 0;
    rep(i, 0, 5)
    {
        ans = max(ans, dp[i][100000]);
    }
    cout << ans << endl;
}