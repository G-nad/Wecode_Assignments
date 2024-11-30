#include <bits/stdc++.h>

using namespace std;

long long a1 = 1025250, a2 = 705550, a3 = 419550, a4 = 192450, a5 = 94650;
int main(){
    long long n;
    cin >> n;
    double cnt = 0;
    if (n > a1){
        cnt += ((double)(n - a1) / 3302.0);
        n -= (n - a1);
    }
    if (n > a2){
        cnt += ((double)(n - a2) / 3197.0);
        n -= (n - a2);
    }
    if (n > a3){
        cnt += ((double)(n - a3) / 2860.0);
        n -= (n - a3);
    }
    if (n > a4){
        cnt += ((double)(n - a4) / 2271.0);
        n -= (n - a4);
    }
    if (n > a5){
        cnt += ((double)(n - a5) / 1956.0);
        n -= (n - a5);
    }
//    if (n % 1893ll != 0) cout << -1;
    long long ok = (cnt + (double)n / 1893.0);
    if (ok == (cnt + (double)n / 1893.0)) cout << (cnt + (double)n / 1893.0);
    else cout << -1;

    return 0;
}


