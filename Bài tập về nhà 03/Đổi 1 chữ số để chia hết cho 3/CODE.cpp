#include <bits/stdc++.h>

using namespace std;

string s;

void check(){
	int sum = 0;
	for (int i = 0; i < (int)s.size(); i++)
        sum += (s[i] - '0');
	if (sum % 3 == 0){
		for (int i = 0; i < (int)s.size(); i++)
            cout << s[i];
		exit(0);
	}
}

int main() {
	cin >> s;
	for (int i = 0; i < (int)s.size(); i++){
		int clone = s[i] - '0';
		for (int x = 9 ; x >= max(clone + 1, 0 + (i == 0)); x--){
			s[i] = x + '0';
			check();
		}
		s[i] = clone + '0';
	}

	for (int i = (int)s.size(); i >= 0; i--){
		int clone = s[i] - '0';
		for (int x = clone - 1; x >= 0 + (i == 0); x--){
			s[i] = x + '0';
			check();
		}
		s[i] = clone + '0';
	}

	return 0;
}