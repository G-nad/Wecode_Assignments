#include <iostream>
using namespace std;
int modulo(int m, int n){
    int cur = m - n;
    if (cur < n) return cur;
    return modulo(cur, n);
}


int main (){
    int m, n; cin >> m >> n;
	cout << modulo(m, n);
}