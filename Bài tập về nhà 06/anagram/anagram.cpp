#include <bits/stdc++.h>
using namespace std;

const int maxn = 256;
int cnt1[maxn], cnt2[maxn];

int main(){
    string s1, s2;
    cin >> s1 >> s2;

    for (int i = 0; i < s1.size(); i++) {
        char c = s1[i];
        cnt1[(int)c]++;
    }
    for (int i = 0; i < s2.size(); i++) {
        char c = s2[i];
        cnt2[(int)c]++;
    }

    for (int i = 0; i < 256; i++){
        if (cnt1[i] != cnt2[i]) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}