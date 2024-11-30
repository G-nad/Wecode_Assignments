#include <bits/stdc++.h>

using namespace std;

int main() {
	int x, y;
	int nowx = 0;
	int nowy = 0;
	while (cin >> x >> y){
        if (y == -1 || y == -3){
            if (y == -3) x *= -1;
            nowy += x;
        }
        else{
            if (y == -2) x *= -1;
            nowx += x;
        }
	}
	//cout << nowx << " " << nowy << "\n";
	if (nowy) cout << abs(nowy) << " " << ((nowy > 0) ? -1 : -3) << " ";
	if (nowx) cout << abs(nowx) << " " << ((nowx > 0) ? -4 : -2) << "\n";
}