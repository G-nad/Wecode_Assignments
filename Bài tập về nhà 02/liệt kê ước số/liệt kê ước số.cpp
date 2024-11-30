#include <bits/stdc++.h>

using namespace std;

vector <long long > vi;
int main() {
    long long n;
    cin >> n;
    for (long long i = 1; i * i <= n; i++){
        if (n % i == 0) {
            vi.push_back(i);
            if (i != (n / i)) vi.push_back(n/i);
        }
    }
    sort(vi.begin(), vi.end(), greater<>());
    for (long long u : vi) cout << u << " ";
    return 0;
}