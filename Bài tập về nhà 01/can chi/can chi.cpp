#include <bits/stdc++.h>
using namespace std;

string s[] = {"THIN", "TY.", "NGO", "MUI", "THAN", "DAU", "TUAT", "HOI", "TY'", "SUU", "DAN", "MEO"};
string ConGiap(int n) {
    int k = ((n - 2000) % 12 + 12) % 12;
    if (n < 0) return s[k + 1];
    else return s[k];
}

string sCan[] = {"CANH", "TAN", "NHAM", "QUY", "GIAP", "AT", "BINH", "DINH", "MAU", "KY"};
string Can(int n){
    int k = (((((n - 2000) % 10) + 10) % 10) + 10) % 10;
    //cout << k << "\n";
    if (n < 0 && (k + 1) > 9) return sCan[0];
    else if (n < 0 && k < 9) return sCan[k + 1];
    else return sCan[k];
}

int main() {
    int n;
    cin >> n;
    cout << Can(n) << " " << ConGiap(n) << "\n";
    return 0;
}