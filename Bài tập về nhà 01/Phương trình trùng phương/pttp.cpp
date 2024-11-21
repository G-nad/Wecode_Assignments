#include <bits/stdc++.h>

using namespace std;

double a, b, c;
int main(){
    cin >> a >> b >> c;

    double L = -1.0*c / b;
    if (a == 0.0){
        if (b == 0.0 && c == 0.0) {
            cout << "ℝ"; return 0;
        }
        if (b == 0.0 && c != 0.0){
            cout << "Ø"; return 0;
        }
        if (L < 0.0) {
            cout << "Ø"; return 0;
        }
        if (L == 0.0) {
            cout << "{0}"; return 0;
        }
        if (L > 0.0) {
            cout << "{" << -1.0*sqrt(L) << ", " << 1.0*sqrt(L) << "}";
            return 0;
        }
    }
    else {
        double delta = b*b - 4.0*a*c;
        double x1 = 0.0, x2 = 0.0, xkep = 0.0;
        double P = c/a;
        if (delta > 0.0){
            x1 = (-b + 1.0*sqrt(delta)) / (2.0*a);
            x2 = (-b - 1.0*sqrt(delta)) / (2.0*a);
            if (x1 < x2) swap(x1, x2);
            if (x1 < 0.0 && x2 < 0.0){
                cout << "Ø";
                return 0;
            }
            if (x1 > 0.0 && x2 > 0.0){
                cout << "{" << -1.0*sqrt(x1) << ", " << -1.0*sqrt(x2) << ", " << 1.0*sqrt(x2) << ", " << 1.0*sqrt(x1) << "}";
                return 0;
            }
            if (x1 > 0.0 && x2 == 0.0) {
                cout << "{" << -1.0*sqrt(x1) << ", 0, " << 1.0*sqrt(x1) << "}";
                return 0;
            }
            if (x1 == 0.0 && x2 < 0.0) {
                cout << "{0}";
                return 0;
            }
            if (P < 0.0) {
                cout << "{" << -1.0*sqrt(x1) << ", " << 1.0*sqrt(x1) << "}";
                return 0;
            }
        }
        else if (abs(b*b - 4.0*a*c) < 1e-9){
            x1 = x2 = -b / (2.0*a);
            if (x1 > 0.0) {
                cout << "{" << -1.0*sqrt(x1) << ", " << 1.0*sqrt(x1) << "}";
                return 0;
            }
            if (x1 == 0.0) {
                cout << "{0}";
                return 0;
            }
            if (x1 < 0.0){
                cout << "Ø";
                return 0;
            }
        }
        else {
            cout << "Ø";
            return 0;
        }
    }
    return 0;
}

