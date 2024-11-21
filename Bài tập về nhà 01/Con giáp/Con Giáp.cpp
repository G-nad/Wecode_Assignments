#include <bits/stdc++.h>
using namespace std;

string s[] = {"THIN", "TY.", "NGO", "MUI", "THAN", "DAU", "TUAT", "HOI", "TY'", "SUU", "DAN", "MEO"};

string ConGiap(int n) {
    int k = ((n - 2000) % 12 + 12) % 12;
    if (n < 0) return s[k + 1];
    else return s[k];
}

int main() {
    int n;
    cin >> n;
    cout << ConGiap(n) << "\n";

    return 0;
}