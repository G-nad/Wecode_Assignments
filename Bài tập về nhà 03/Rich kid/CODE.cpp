#include <iostream>

using namespace std;

bool check(int a, int b){
    return ((a - b) > 20000000);
}
int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    long long sum = a + b + c + d;
    if (sum <= 100000000ll || check(a, b) || check(a, c) || check(a, d)
                           || check(b, c) || check(b, d) || check(c, d)) cout << "FALSE";
    else cout << "TRUE";
    return 0;
}