#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "enter the number of process\n";
    cin >> n;
    vector<pair<int, int>> v;
    vector<int> bt(n), pid(n), ct(n), tat(n), wt(n), rt(n), at(n);
    for (int i = 0; i < n; i++) {
        cin >> bt[i];
        cin >> pid[i];
        auto temp = make_pair(bt[i], pid[i]);
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    int current_time = 0;
    rt.push_back(0);
    for (int i = 0; i < n; i++) {
        int burst_time = v[i].first;
        ct[i] = burst_time + current_time;
        current_time+=burst_time;
        tat[i] = ct[i] - at[i];  // at is always zero acc. to question
        wt[i] = tat[i] - burst_time;
        rt[i+1] = current_time - at[i];
    }
    cout << "Tabular form->\n";  // Tabular form :
    cout << setw(10) << "pid" << setw(10) << "at" << setw(10) << "bt" << setw(10) << "ct" << setw(10) << "tat" << setw(10) << "wat" << setw(10) << "rt" << endl;
    for (int i = 0; i < n; i++) {
        cout << setw(10) << v[i].second << setw(10) << at[i] << setw(10) << v[i].first << setw(10) << ct[i] << setw(10) << tat[i] << setw(10) << wt[i] << setw(10) << rt[i] << endl;
    }
    cout << endl;
    cout << "Gantt chart->\n";  // Gantt chart :
    cout << "0";
    for (int i = 0; i < n; i++) {
        cout << setw((v[i + 1].first - v[i].first) + 1);
        cout << v[i].first;
    }
    cout << endl;
    double sum = 0;
    for (auto i : tat) {
        sum += i;
    }
    cout << endl;
    cout << "The average Waiting time is: " << sum / n<<endl;
    sum = 0;
    for (auto i : wt) {
        sum += i;
    }
    cout << "The average Waiting time is: " << sum / n<<endl;
}
// 3
// 4 1
// 5 0
// 2 3
// 4
// 3 4
// 7 3
// 8 2
// 6 1