#include <iostream>
#include <cstring>
using namespace std;

void input(char A[1000][1000], int n){
    n = 0;
    int nw = 0;
    string s;
    int sz[1000];
    while (cin >> s) {
        if (s == ".") break;
        for (int i = 0 ; i < (int)s.size() ; i++) {
            A[n][i] = s[i];
        }
        sz[n] = (int)s.size();
        nw = max(nw, sz[n]);
        n++;
    }
    for (int i = 0 ; i < n ; i++) {
        int si = nw - sz[i];
//        cout << si << "\n";
//        if (si % 2 == 0){
            for (int x = 1; x <= si/2; x++) cout << ' ';
            for (int j = 0; j < sz[i]; j++) cout << A[i][j];
            for (int x = 1; x <= si/2; x++) cout << ' ';
            cout << endl;
//        }
    }
    return;
}

void output(char A[1000][1000], int & n)
{
    return;
}


int main()
{
    char A[1000][1000];
    int n;
    input(A, n);
    output(A, n);
}