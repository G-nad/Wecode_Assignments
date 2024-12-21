#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e2 + 5;
int n, a[MAXN];
double val[MAXN];
double t;

double tinh(int & id){
	double ans = 0;
	for (int i = 1 ; i < id ; i++){
		ans = ans + (val[i] * a[i]);
	}
	for (int i = id ; i <= n ; i++)
		ans = ans + (0.25 * a[i]);
	ans = ans / 100.0;
	return ans;
}


double tinh2(int & id){
	double ans = 0;
	for (int i = 1 ; i < id ; i++){
		ans = ans + (val[i] * a[i]);
	}
	for (int i = id ; i <= n ; i++)
		ans = ans + (10 * a[i]);
	ans = ans / 100.0;
	return ans;
}

void dequy(int id){
	if (tinh(id) > t + 0.1) return;
	if (tinh2(id) < t - 0.1) return;
	if (id == n + 1)
	{	
		if (round(tinh(id) * 10.0) == t * 10){
			for (int i = 1 ; i <= n ; i++) cout << val[i] << ' ';
			cout << '\n';
		}
		return;
	}
	for (double x = 0.25 ; x <= 10 ; x = x + 0.25)
	{	
		val[id] = x;
		///cout << x << " => " << ET << " : " << canduoi(id) << " & " << cantren(id) << '\n';
		dequy(id + 1);
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 1 ; i <= n ; i++){
		cin >> a[i];
	}
	cin >> t;
	dequy(1);
	return 0;
}