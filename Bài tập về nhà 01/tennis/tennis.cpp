#include <bits/stdc++.h>

using namespace std;

int a, b;
int main(){
    cin >> a >> b;
    if (a < b) swap(a, b);
    cout << ((a == 6 && b <= 4) || (a == 7 && (b == 5 || b == 6)));
    return 0;
}