#include <bits/stdc++.h>
#define N 100005

using namespace std;

int n;
long long A[N];
long long x;
int main(){
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> A[i];
    cin >> x;

    sort(A + 1, A + n + 1);
    int l = 1, r = n;
    long long minx = 0x3f;
    while(l < r){
        if (A[l] + A[r] == x) {
            minx = min(minx, abs(A[l] - A[r]));
//            cout << A[l] << ' ' << A[r] << endl;
            r--;
            l++;
        }
        else if (A[l] + A[r] < x) l++;
        else r--;
    }

    l = 1, r = n;
    while(l < r){
        if (A[l] + A[r] == x) {
            if (abs(A[l] - A[r]) == minx){
                cout << A[l] << "\n" << A[r] << endl;
                return 0;
            }
            r--;
            l++;
        }
        else if (A[l] + A[r] < x) l++;
        else r--;
    }
    return 0;
}