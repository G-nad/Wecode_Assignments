#include <iostream>
#include <string>
#include <utility>
using namespace std;

pair<int, int> count_min(int a[], int n){
    if (n == 1) return pair < int , int > (a[0], 1);
    pair < int , int > res = count_min(a, n - 1);

    if (a[n - 1] < res.first) {
        res = pair < int , int > (a[n - 1], 1);
    }

    else if (a[n - 1] == res.first)
        res.second++;
    return res;

}
int main()
{
    int n;
    cin >> n;
    int a[10000];

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    auto b = count_min(a, n);
    cout << to_string(b.first) + " " + to_string(b.second);
    return 0;
}
