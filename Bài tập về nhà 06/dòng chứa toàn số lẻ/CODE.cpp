
#include <iostream>
using namespace std;
#define MAX 1000

void input(int arr[][MAX], unsigned int &m, unsigned int &n);
void output(int arr[][MAX], unsigned int m, unsigned int n);
void findOddRows(int arr[][MAX], unsigned int m, unsigned int n);


void input(int arr[][MAX], unsigned int &m, unsigned int &n){
    cin >> m >> n;
    for(int i = 0; i < m; ++i)
        for(int j = 0; j < n; ++j)
            cin >> arr[i][j];
}

void findOddRows(int arr[][MAX], unsigned int m, unsigned int n){
    bool hang_le = 0;
    for(int i = 0; i < m; ++i){
        bool ok = 1;
        for(int j = 0; j < n; ++j){
            if(arr[i][j] % 2 == 0){
                ok = 0;
                break;
            }
        }
        if(ok){
            cout << i << " ";
            hang_le = 1;
        }
    }

    if(!hang_le){
        cout << -1;
        exit(0);
    }
}

int main()
{
    int arr[MAX][MAX];
    unsigned int m;
    unsigned int n;


    input(arr, m, n);
    findOddRows(arr, m, n);

    return 0;
}