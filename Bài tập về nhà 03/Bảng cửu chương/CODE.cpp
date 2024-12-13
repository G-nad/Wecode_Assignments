#include <bits/stdc++.h>

using namespace std;

int main(){
    for (int i = 1; i <= 9; i++){
        for (int j = 1; j <= 9; j++){
            cout << j << "\t*\t" << i << "\t=\t" << j*i << "\t";
        }
        cout << "\n";
    }
    return 0;
}