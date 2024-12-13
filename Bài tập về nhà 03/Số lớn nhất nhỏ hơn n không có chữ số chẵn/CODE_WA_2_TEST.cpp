#include <bits/stdc++.h>

using namespace std;

int main(){
    string n;
    cin >> n;
    int num1 = (int)n[0] - 48;
    if (num1 % 2 == 1 && (int)n[1] - '0' == 0){
        if (num1 != 1) cout << num1 - 2;
        for (int i = 1; i < n.size(); i++) cout << 9;
        return 0;
    }

    int pos = 0;
    string ans, t;
    for (int i = 0; i < n.size(); i++){
        int tmp = n[i] - '0';
        int nxt = n[i + 1] - '0';
        if (nxt == 0){
//            check1 = 1;
//            cout << tmp - 1;
            if (tmp % 2)
                t = t + (char)(tmp - 2 + '0');
            else t = t + (char)(tmp - 1 + '0');
            ans = ans + n[i];
            pos = i;
            break;
        }
        if (tmp % 2 == 0){
//            check2 = 1;
//            cout << tmp - 1;
            t = t + (char)(tmp - 1 + '0');
            ans = ans + n[i];
            pos = i;
            break;
        }

//        cout << tmp;
        t = t + (char)(tmp + '0');
        ans = ans + n[i];
    }
//    cout << ans << '\n';
//    cout << t << "\n";
    if (ans == n){
        for (int i = 0; i < ans.size() - 1; i++) cout << ans[i];
        int tmp = ans[(int)ans.size() - 1] - '0';
        cout << tmp - 2;
    }
    else {
        cout << t;
        for (int i = pos; i < n.size() - 1; i++) cout << 9;
    }
    return 0;
}
//1333303