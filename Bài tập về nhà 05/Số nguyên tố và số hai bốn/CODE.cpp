#include <bits/stdc++.h>

using namespace std;

bool prime(int x){
    if (x < 2) return 0;
    for (int i = 2; i * i <= x; i++){
        if (x % i == 0) return 0;
    }
    return 1;
}

int base = 0;
bool check(int n){
    int x = (int)sqrt(24 * n + 1);
//    cout << x << "\n";
    if (x == base) return 0;
    return (prime(x));
}
int main(){
    int n, cnt = 0;
    cin >> n;
    base = sqrt(24 * n + 1);
    //cout << base << '\n';
    n++;
    while(!check(n)){
        n++;
        cnt++;
    }
    //cout << n << ' ';
    cout << cnt + 1;
    return 0;
}