#include <bits/stdc++.h>

using namespace std;

int a1, b1, a2, b2;
int c1, d1, c2, d2;
int cntNam = 0, cntNga = 0;
int main(){
    cin >> a1 >> b1 >> a2 >> b2;
    cin >> c1 >> d1 >> c2 >> d2;
    
    for (int i = a1 + a2; i <= b1 + b2; i++) {
        for (int j = c1 + c2; j <= d1 + d2; j++){
            if (i > j) cntNam++;
            else if (i < j) cntNga++;
        }
    }

    if (cntNam > cntNga) cout << "Nam";
    else if (cntNam < cntNga) cout << "Nga";
    else cout << "Tie";
    return 0;
}