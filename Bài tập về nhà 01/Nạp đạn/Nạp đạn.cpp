#include <bits/stdc++.h>

using namespace std;

int b, c, m, n, r;
int main(){
    cin >> b >> c >> m >> n >> r;
    if (m == 0) {cout << 0; return 0;}
    int A = n / m, B = n % m;
//    cout << A << " " << B << "\n";
   int ans = 0;
   if (c > m * b) ans += m * b * (A - 1) + m * A * r;
   else ans += c * (A - 1) + m * A * r;
   
   ///
  /// cout << B * b << ' ' << c << '\n';
   if (c > B * b) ans += B * (b + r);
   else ans += c + (r * B);
   
   cout << ans;
   
    return 0;
}
//1 3 5 7 2
//1 3 5 17 3