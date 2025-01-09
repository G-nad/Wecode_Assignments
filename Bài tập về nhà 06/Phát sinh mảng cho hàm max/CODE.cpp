#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 55;
int n, k;
int a[N];

int main() 
{
	cin >> n;
	a[0] = 0;
	for (int i = 1 ; i <= n ; i++){
		cin >> a[i];
	}
	sort (a + 1, a + n + 1);
	n--;
	cin >> k;
	if (k > n) {
		cout << "OH SHIT";
		return 0;
	}
	if (a[n] == a[n - k]) {
		cout << "OH SHIT";
		return 0;
	}
	for (int i = n - k + 1 ; i <= n ; i++) cout << a[i] << ' ';
	for (int i = 1 ; i < n - k + 1 ; i++) cout << a[i] << ' ';
	cout << a[n + 1];
	return 0;
}