#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
	int n;
	cin >> n;
	ll x;
	ll mx = 0;
	for (int i = 1 ; i <= n ; i++){
		cin >> x;
		mx = max(mx, x);
	}
	ll ans = 1;
	while (ans < mx) ans *= 2LL;
	cout << ans;
}