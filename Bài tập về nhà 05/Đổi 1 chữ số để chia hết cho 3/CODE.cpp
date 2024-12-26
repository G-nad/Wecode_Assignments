#include <bits/stdc++.h>

using namespace std;

string s;

void check(string s){
    int sum = 0;
    for (int i = 0; i < (int)s.size(); i++){
        sum += (s[i] - '0');
    }
    if (sum % 3 == 0) {
        cout << s;
        //cout << endl;
        exit(0);
    }
}

int main(){
    cin >> s;
    string cur = s;

    for (int i = 0; i < (int)s.size(); i++){
        int c = s[i] - '0';
        int p = (i == 0);
        for (int x = 9; x >= max(c + 1, p); x--){
            s[i] = x + '0';
            check(s);
        }
        s[i] = c + '0';
    }

    for (int i = (int)s.size() - 1; i >= 0; i--){
        int c = s[i] - '0';
        int p = (i == 0);
        for (int x = c - 1; x >= p; x--){
            s[i] = x + '0';
            check(s);
        }
        s[i] = c + '0';
    }


    cout << s;
    return 0;
}