#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool check(ll x){
	if (x <= 0) return 0;
	ll _x = sqrt(x);
	return ((_x * _x) == x);
}

int main() {
	ll n;
	cin >> n;
	n = n * n;
	ll cnt = 0;
	for (ll i = 1; i * i <= n / 2; i++){
		if (check(n - i * i)) cnt++;
	}
	cout << cnt << "\n";

	return 0;
}