#include <bits/stdc++.h>

using namespace std;

bool check(int n){
    if (n == 1) return 1;
    for (int i = 2; i * i <= n; i++){
        int tmp = n;
        while(tmp % i == 0) tmp /= i;
        if (tmp == 1) return 1;
    }
    return 0;
}
int main(){
    int n;
    while(cin >> n){
        if (n == 0) break;
        cout << check(n) << "\n";
    }
    return 0;
}