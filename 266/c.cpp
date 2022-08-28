#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (ll i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
#define all(x) (x).begin(), (x).end()
#define sortall(v) sort(v.begen(), v.end())

using namespace std;
using ll = long long;

struct V
{
    int x, y;
    V(int x = 0, int y = 0) : x(x), y(y) {}
    V operator-(const V &a) const
    {
        return V(x - a.x, y - a.y);
    }

    int cross(const V &a) const
    {
        return x * a.y - y * a.x;
    }

    int ccw(const V &a) const
    {
        int area = cross(a);
        if (area > 0)
            return 1;
        if (area < 0)
            return -1;
        return 0;
    }
};

int main()
{
    vector<V> p(4);
    rep(i, 0, 4) cin >> p[i].x >> p[i].y;
    rep(i, 0, 4)
    {
        V A = p[i];
        V B = p[(i + 1) % 4];
        V C = p[(i + 2) % 4];
        V b = B - A, c = C - A;
        if (b.ccw(c) != 1)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}