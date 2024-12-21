#include <iostream>
using namespace std;

string s;
int sum_without_remember(int a, int b){
    if (a == 0 && b == 0) {
        if (s.size() == 0) return 0;
        else cout << s;
        exit(0);
    }
    int c = a%10, d = b % 10;
    char m = (c + d) % 10 + '0'; //cout << m << '\n';
    s = m + s;
    return sum_without_remember(a / 10, b / 10);
}

int main (){
    int param1, param2;
    cin >> param1 >> param2;
	cout << sum_without_remember(param1, param2);
}