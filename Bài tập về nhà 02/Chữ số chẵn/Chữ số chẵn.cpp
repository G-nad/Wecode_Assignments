#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    while(n){
        int a = n % 10;
        if (a % 2 == 0){
            cout << "TRUE\n";
            return 0;
        }
        n /= 10;
    }
    cout << "FALSE\n";
    return 0;
}