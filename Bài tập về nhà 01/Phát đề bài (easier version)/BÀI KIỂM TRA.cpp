#include <bits/stdc++.h>
#define ll long long

using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, k, x, y;
    cin >> n >> k >> x >> y;

    int now = (x - 1) * 2 + y;
    if (now - k >= 1 && now + k <= n)
    {
        int l = now - k, r = now + k;
        if ( abs(( (l - ((l % 2 == 1) ? 1 : 2)) / 2) - (x - 1)) <= abs(( (r - ((r % 2 == 1) ? 1 : 2)) / 2) - (x - 1)) )
        {
            int c = l % 2;
            if (c == 0) c = 2;
            l -= c;
            cout << (l / 2) + 1 << ' ' << c << '\n';
            return 0;
        }
        else
        {   ///cout << "hihi";
            l = r;
            int c = l % 2;
            if (c == 0) c = 2;
            l -= c;
            cout << (l / 2) + 1 << ' ' << c << '\n';
            return 0;
        }

    }
    else if (now - k >= 1)
    {
        int l = now - k;
        int c = l % 2;
        if (c == 0) c = 2;
        l -= c;
        cout << (l / 2) + 1 << ' ' << c << '\n';
        return 0;
    }
    else if (now + k <= n)
    {
        int l = now - k, r = now + k;
        l = r;
        int c = l % 2;
        if (c == 0) c = 2;
        l -= c;
        cout << (l / 2) + 1 << ' ' << c << '\n';
        return 0;
    }
    else cout << -1;

    return 0;
}
