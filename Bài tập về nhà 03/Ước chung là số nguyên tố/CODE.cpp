#include <bits/stdc++.h>
#define N 10000000
using namespace std;

bool prime[N + 5];
void sangnt(){
    for (int i = 0; i <= N; i++) prime[i] = 1;
    prime[0] = prime[1] = 0;
    for (int i = 2; i * i <= N; i++){
        if (prime[i] == 1){
            for (int j = i * i; j <= N; j += i){
                prime[j] = 0;
            }
        }
    }
}

int GCD(int a, int b){
    if (b == 0) return a;
    else if (a == 0) return b;
    if (a < b) return GCD(a, b % a);
    else return GCD(b, a % b);
}

int main(){
    sangnt();
//    for (int i = 1; i <= 100; i++) {
//        if (prime[i]) cout << i << " ";
//    }

    int n;
    cin >> n;
    int m = n;
    while(m++){
        int G = GCD(m, n);
//        cout << G << " ";
        if (prime[G]) {
            cout << m;
            break;
        }
    }
    return 0;
}