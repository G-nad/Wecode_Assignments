#include <iostream>
using namespace std;

int res = 0;
int well(int a, int b, int n){
    if (n == 0) return res;
    res += (a * b);
//    cerr << c << " " << d << " " << res << "\n";
    return well(a + 1, b + 1, --n);
}

int main (){
    int a,b,n; cin >> a >> b >> n;
	cout << well(a, b, n);
}