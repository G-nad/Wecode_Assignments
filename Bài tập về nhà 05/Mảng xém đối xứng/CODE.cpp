#include <bits/stdc++.h>
#define N 1000005
using namespace std;

int n;
int A[N];

int main(){
    cin >> n;
    if (n == 2){
        cout << "TRUE"; return 0;
    }
    for (int i = 1; i <= n; i++) cin >> A[i];
    int cnt = 0;
    for (int i = 1; i <= (n / 2) + (n % 2); i++){
        if (A[i] != A[n - i + 1]) {
            cnt++;
        }
    }
    if (cnt > 1) cout << "FALSE";
    else cout << "TRUE";
    return 0;
}
