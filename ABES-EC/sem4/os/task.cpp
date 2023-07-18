#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
int t = 0;
vector<int> at, bt, pid, ct, tat, wat, rt, gc;
vector<pair<int, pair<int, int>>> v;
//           at       pid  bt
void print_id(int n) {
    cout << setw(n / 2);
    cout << " P" << v[t].s.f << " ";
    cout << setw(n / 2);
    t++;
}
void print_bar(int n) {
    while (n--) {
        cout << "|";
    }
}
int main() {
    int n;
    cout << "enter the number of processes";
    cin >> n;
    bool flag = 1;
    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        at.push_back(a);
        pid.push_back(b);
        bt.push_back(c);
        auto p = make_pair(b, c);
        auto q = make_pair(a, p);
        v.push_back(q);
    }
    sort(v.begin(), v.end());
    int current_time = at[0];
    if (v[0].f > 0) {
        gc.push_back(0);
        gc.push_back(-1);
        gc.push_back(v[0].f);
    } else {
        gc.push_back(0);
    }
    for (int i = 0; i < n; i++) {
        auto arrival_time = v[i].f;
        auto process_id = v[i].s.f;
        auto burst_time = v[i].s.s;
        rt.push_back(current_time - arrival_time);
        ct.push_back(current_time + burst_time);
        current_time = max(ct[i], v[i + 1].f);
        tat.push_back(ct[i] - arrival_time);
        wat.push_back(tat[i] - burst_time);

        // for gc=>
        if (ct[i] < v[i + 1].f) {
            gc.push_back(ct[i]);
            gc.push_back(-1);
            gc.push_back(v[i + 1].f);
        } else {
            gc.push_back(ct[i]);
        }
    }
    cout << "Tabular form->\n";  // Tabular form :
    cout << setw(10) << "at" << setw(10) << "pid" << setw(10) << "bt" << setw(10) << "ct" << setw(10) << "tat" << setw(10) << "wat" << setw(10) << "rt" << endl;
    for (int i = 0; i < n; i++) {
        auto a = v[i].f;
        auto b = v[i].s.f;
        auto c = v[i].s.s;
        cout << setw(10) << a << setw(10) << b << setw(10) << c << setw(10) << ct[i] << setw(10) << tat[i] << setw(10) << wat[i] << setw(10) << rt[i] << endl;
    }
    cout << "\n";
    cout << "Gantt chart->\n";  // Gantt chart :
    for (int i = 0; i < gc.size(); i++) {
        if (gc[i + 1] == -1) {
            cout << gc[i];
            print_bar(gc[i + 2] - gc[i]);

            i++;
        } else {
            cout << gc[i];
            if (i != gc.size() - 1) {
                print_id(gc[i]);
            }
        }
    }
    double sum=0;
    double size=tat.size();
    cout<<endl;
    cout<<endl;
    for(auto i:tat){
        sum+=i;
    }
    cout<<"The Average turn around time is: "<<sum/size;
    sum=0;
    for(auto i:wat){
        sum+=i;
    }
    cout<<endl;
    cout<<"The Average Waiting time is: "<<sum/size;
    cout << endl;

    return 0;
}
// Input:
// 3
// 2 1 3
// 8 3 9
// 6 2 3
// 4
// 0 1 6
// 1 2 5
// 2 3 3
// 3 4 9
// 3
// 0 0 10
// 1 10 5
// 2 15 8