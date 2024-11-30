#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, m, n;
    cin >> a >> b;
    m = a - b;
    n = b - a;
    if (m == 0) cout << "DRAW";
    else if (m == 1 || n == 2) cout << "B WON";
    else if (n == 1 || m == 2) cout << "A WON";
    return 0;
}