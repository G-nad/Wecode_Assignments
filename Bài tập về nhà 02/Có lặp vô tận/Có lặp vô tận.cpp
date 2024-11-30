#include <bits/stdc++.h>

using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
//    while(a != b){
//        a++;
//        b--;
//        cout << a << " " << b << "\n";
//    }


    if (a > b || abs(a - b) % 2 ==  1) cout << "TRUE";
    else cout << "FALSE";
    return 0;
}