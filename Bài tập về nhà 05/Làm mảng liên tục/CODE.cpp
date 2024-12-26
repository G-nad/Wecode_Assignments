#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e6 + 5;
int n;

int main(){
    cin >> n;
    int cnt = n - 2;
    int minx = 2e9, maxx = -2e9;
    for (int i = 1; i <= n; i++){
        int x; cin >> x;
        minx = min(minx, x);
        maxx = max(maxx, x);
    }

    cout << (maxx - minx - cnt - 1);
    return 0;
}
