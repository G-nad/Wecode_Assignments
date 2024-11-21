#include <bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;

int n, x, y;

bool check(int x, int y) {
    return (x <= n && x >= 1 && y % 2 == 0 && y >= 2 && y <= (6LL + (n - x) * 2LL) );
}

void Cout(int x, int y) {
    if (check(x, y)) cout << x << ' ' << y << '\n';
    else cout << -1 << '\n';
}

int32_t main() {
    cin >> n >> x >> y;
    if (!check(x, y)) {
        cout << -1;
         return 0;
    }

    Cout(x + 1 , y - 2);
    Cout(x , y - 2);
    Cout(x - 1 , y + 2);
    Cout(x, y + 2);

    return 0;
}