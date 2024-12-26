#include <bits/stdc++.h>
#define N 10005

using namespace std;

int n;
double Time[N];
double base_dmg, spike_dmg;
double Time_left;

deque <double > q;
int main(){
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> Time[i];
    }

    cin >> base_dmg;
    cin >> spike_dmg;
    cin >> Time_left;

    double sum = 0.0;
    for (int i = 1; i <= n; i++){
        double t = Time[i];
//        cout << "time: " << t << "\n";
        while(!q.empty() && (q.front() + Time_left) < t){
//            cout << q.front() << " " << Time_left << '\n';
            q.pop_front();
        }

        sum += (base_dmg * 1.0);
        sum += (q.size() * 1.0 * spike_dmg);
        q.push_back(t);
//        cout << "Total dmg: " << sum << "\n";
//        cout << "------------------------------------------\n";
    }

    cout << sum;
    return 0;
}