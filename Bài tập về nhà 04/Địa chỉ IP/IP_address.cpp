#include <bits/stdc++.h>
using namespace std;

bool check(string t){
    int n = t.size();
    if (n < 1 || n > 3) return 0;
    if (t[0] == '0' && n > 1) return 0;

    int num = 0;
    for (char c : t){
        num = num * 10 + c - '0';
    }
    return (num >= 0 && num <= 255);
}
void Solve(string s){
    int n = s.size();
    if (n < 4 || n > 12) return;

    for (int i = 1; i < 4 && i < n; i++){
        for (int j = i + 1; j < i + 4 && j < n; j++){
            for (int k = j + 1; k < j + 4 && k < n; k++){
                string p1 = s.substr(0, i);
                string p2 = s.substr(i, j - i);
                string p3 = s.substr(j, k - j);
                string p4 = s.substr(k, n - k);

                if (check(p1) && check(p2) && check(p3) && check(p4)) {
                    cout << p1 << "." << p2 << "." << p3 << "." << p4 << '\n';
                }
            }
        }
    }

}
int main(){
    string s;
    cin >> s;

    Solve(s);
    return 0;
}