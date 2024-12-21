#include <iostream>
using namespace std;

void Dequy(long long x) {
    if (x == 0) return;
    Dequy(x/10ll);
    cout << x % 10 << '\n';
}

int main() {
    long long x;
    cin >> x;
    if (x == 0) {
        cout << 0 << '\n';
        return 0;
    }
    Dequy(x);
    return 0;
}