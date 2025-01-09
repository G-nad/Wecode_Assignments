#include <bits/stdc++.h>

using namespace std;
const int maxn = 1e3+5;

int row, col;
int A[maxn][maxn];

int main(){
    cin >> row >> col;
    for (int i = 1; i <= row; i++){
        for (int j = 1; j <= col; j++){
            cin >> A[i][j];
        }
    }

    int cnt = 0;
    for (int i = 1; i <= row; i++){
        for (int j = 1; j <= col; j++){
            if (A[i][j]){
                if (i == 1 || !A[i - 1][j]) cnt++; //up
                if (i == row || !A[i + 1][j]) cnt++; //down
                if (j == 1 || !A[i][j - 1]) cnt++; //left
                if (j == col || !A[i][j + 1]) cnt++; //right
            }
        }
    }
    cout << cnt;
    return 0;
}