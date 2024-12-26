#include <bits/stdc++.h>

using namespace std;

int n, k;
vector <int > vi;
int main(){
    //freopen("TERMS.inp", "r", stdin);
    //freopen("TERMS.out", "w", stdout);

    cin >> n >> k;
    if (n < k * (k+1) / 2){
        cout << -1;
        return 0;
    }
    int i = 1;
    while(k > 1){
        //cout << i << ' ';
        vi.push_back(i);
        n -= i;
        k--;
        i++;
    }
    //cout << n;
    vi.push_back(n);
    sort(vi.begin(), vi.end());
    if (vi.size() == 0) cout << -1;
    else {
        cout << vi.size() << '\n';
        for (int x : vi) cout << x << " ";
    }
    return 0;
}
