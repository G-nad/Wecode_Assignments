#include <iostream>
using namespace std;

bool contain_even_digit(int n){
    if (n == 0) return 0;
    if ((n%10) % 2 == 0) return 1;
    return contain_even_digit(n / 10);

}

int main (){
    int n; cin >> n;
    if (contain_even_digit(n)) cout << "TRUE";
    else cout << "FALSE";
}
