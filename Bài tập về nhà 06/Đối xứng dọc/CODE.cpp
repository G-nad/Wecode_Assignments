#include <iostream>

using namespace std;
/*
void input(int a[1000][1000], int n, int m){
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
}
*/
void horizontal_invert(
int a[1000][1000], int n, int m){
    for (int i = 0; i < (n/2) + (n%2); i++){
        for (int j = 0; j < m; j++){
            swap(a[i][j], a[n-i-1][j]);
        }
    }

}
/*
void output(int a[1000][1000], int n, int m){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
}
*/
int main()
{
    int n, m;
    cin >> n >> m;


    int a[1000][1000];

    input(a, n, m); //Hàm này đã được code chuẩn không thể chỉnh, sinh viên không cần quan tâm

    horizontal_invert(a, n, m);

    output(a, n, m);//Hàm này đã được code chuẩn không cần chỉnh, sinh viên không cần quan tâm

    return 0;
}
