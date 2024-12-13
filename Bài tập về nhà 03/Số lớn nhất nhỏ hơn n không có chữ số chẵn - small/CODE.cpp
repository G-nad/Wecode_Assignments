#include <bits/stdc++.h>

using namespace std;

bool check(long long n){
    while(n > 0ll){
        if ((n % 10) % 2 == 0) return 1;
        n /= 10ll;
    }
    return 0;
}
int main(){
    long long n;
    cin >> n;
    n--;
    while(check(n)){
        n--;
    }
    cout << n;
    return 0;
}