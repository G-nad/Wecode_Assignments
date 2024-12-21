#include <iostream>
using namespace std;

int m = 1, res = 1;
int smallest_factorial_notless_than(int n){
    res *= m;
    m++;
    if (res >= n) return res;
    return smallest_factorial_notless_than(n);

}
int main(){
	int n;
	cin >> n;
    cout << smallest_factorial_notless_than(n);
}