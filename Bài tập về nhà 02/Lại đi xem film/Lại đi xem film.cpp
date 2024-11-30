#include <bits/stdc++.h>

using namespace std;

void F(int x, int y){
    int d = __gcd(x, y);
    x = x / d;
    y = y / d;
    cout << x << " " << y;
}

int main(){
    int a, b, c, x, y, z;
    cin >> a >> b >> c >> x >> y >> z;
    int film = a*3600 + b*60 + c;
    int watch = x*3600 + y*60 + z;

    F(watch, film);
    return 0;
}