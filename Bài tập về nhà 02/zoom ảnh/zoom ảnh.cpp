#include <bits/stdc++.h>

using namespace std;

int main(){
    double x, y, i, j;
    cin >> x >> y >> i >> j;

    double width = (x / i);
    double height = (y / j);

    double R = min(width, height);
//    cout << R << "\n";
    cout << (int)(i * R) << " " << (int)(j * R);
    return 0;
}