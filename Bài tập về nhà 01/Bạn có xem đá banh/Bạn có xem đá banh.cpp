#include <bits/stdc++.h>
using namespace std;

int A[4][4], B[4][4];
int main(){
    for (int i = 1; i <= 3; i++)
        for (int j = 1; j <= 3; j++)
            cin >> A[i][j];
    for (int i = 1; i <= 3; i++)
        for (int j = 1; j <= 3; j++)
            cin >> B[i][j];

    int pointsA = 0, goal_diffA = 0, goal_forsA = 0, fair_playA = 0;
    for (int i = 1; i <= 3; i++){
        goal_forsA += A[i][1];
        goal_diffA += (A[i][1] - A[i][2]);
        fair_playA += A[i][3];
        if (A[i][1] > A[i][2]) pointsA += 3;
        else if (A[i][1] == A[i][2]) pointsA++;
    }
//    cout << pointsA << " " << goal_diffA << " " << goal_forsA << " " << fair_playA << "\n";

    int pointsB = 0, goal_diffB = 0, goal_forsB = 0, fair_playB = 0;
    for (int i = 1; i <= 3; i++){
        goal_forsB += B[i][1];
        goal_diffB += (B[i][1] - B[i][2]);
        fair_playB += B[i][3];
        if (B[i][1] > B[i][2]) pointsB += 3;
        else if (B[i][1] == B[i][2]) pointsB++;
    }
//    cout << pointsB << " " << goal_diffB << " " << goal_forsB << " " << fair_playB << "\n";

    bool ok = 0;
    if (pointsA > pointsB) ok = 1;
    else if (pointsA == pointsB){
        if (goal_diffA > goal_diffB) ok = 1;
        else if (goal_diffA == goal_diffB){
            if (goal_forsA > goal_forsB) ok = 1;
            else if (goal_forsA == goal_forsB){
                if (fair_playA < fair_playB) ok = 1;
                else ok = 0;
            }
        }
    }
    if (ok) cout << pointsA << " " << goal_diffA << " " << goal_forsA << " " << fair_playA << "\n";
    else cout << pointsB << " " << goal_diffB << " " << goal_forsB << " " << fair_playB << "\n";
    return 0;
}