#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6 + 5;
int x, n;
vector < int > vi;

int chance(const int & x){
	if (x == 1612) return 1000000;
	return ((x == 1) ? 1 : -1);
}

int main() {
	cin >> x;
	int a;
	vi.push_back(0);
	n = 0;
	while (cin >> a){ if (a == -1) break;
		n++;
		vi.push_back(a);
	}
	vi.push_back(1612);
	vi.push_back(1612);
	int nxt1 = vi[1], nxt2 = vi[2];
	int key = 3;
	int sta = 0;
	int ans = 0;
	while (key <= n + 2 && abs(sta) <= x)
	{
		if (abs(sta + chance(nxt1)) < abs(sta + chance(nxt2))) {
			sta += chance(nxt1);
			nxt1 = vi[key++];
			if (abs(sta) <= x) ans++;
			cerr << 1 << ' ' << sta << '\n';
		} 
		else {
			sta += chance(nxt2);
			nxt2 = vi[key++];
			if (abs(sta) <= x) ans++;
			cerr << 2 << ' ' << sta << '\n';
		} 
	}
	cout << ans;
	return 0;
}