#include <bits/stdc++.h>

using namespace std;

int k, t;
int main(){
    cin >> k >> t; 
    int n = t % k, m = t / k;
    if (m % 2 == 0) cout << n;
    else cout << k - n;
    return 0;
}
