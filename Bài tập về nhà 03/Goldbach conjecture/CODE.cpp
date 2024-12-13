#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e8 + 5; /// gh so nguyen to
//int f[N], P[N], sz = 0;
//void sangPrime(int n)
//{
//    for (int i = 2 ; i <= n ; ++i)
//    {
//        if (f[i] == 0)
//                f[i] = i;
//            P[++sz] = i;
//        }
//        for (int j = 1 ; j <= sz ; ++j)
//        {
//            if (P[j] > f[i] || 1LL * P[j] * i > n) break;
//            f[P[j]*i] = f[i];
//        }
//    }
//    {
//}

bool checknt(int x){
    if (x < 2) return 0;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0) return 0;
    return 1;
}
int main()
{
	int n;
	cin >> n;
//	sangPrime(n);
	ll cnt = 0;
	for (int i = 2 ; i * 2 <= n ; i++){
		if (checknt(i) && checknt(n - i)) cnt++;
	}
	cout << cnt;
}
