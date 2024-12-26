#include <bits/stdc++.h>
#define N 10005

using namespace std;

int n;
double Time[N];
double base_dmg, spike_dmg;
double Time_left;

double Q_spikes[N];
int id = 0, _front = 1;
void PB(double x){
    id++;
    Q_spikes[id] = x;
}
void Pop(){
    _front++;
}
int sz(){
    return (id - _front + 1);
}
double Front(){
    return Q_spikes[_front];
}


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
        while(sz() != 0 && (Front() + Time_left) < t){
            Pop();
        }
        
        sum += (base_dmg * 1.0);
        sum += (sz() * 1.0 * spike_dmg);
        PB(t);
    }

    cout << sum;
    return 0;
}