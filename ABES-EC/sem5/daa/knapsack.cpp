#include <bits/stdc++.h>
using namespace std;
bool compare(pair<int, int> a, pair<int, int> b) {
    double x = a.first / a.second;
    double y = b.first / b.second;
    return x > y;
}
int main() {
    int n, w;  // number of item and bag size
    cout<<"Enter the number of items and the bag size: \n";
    cin >> n >> w;
    vector<pair<int, int>> v(n);
    cout<<"Enter the profit and corresponding weights: \n";
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;  // profit,weight
    }
    sort(v.begin(), v.end(), compare);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (w >= v[i].second) {
            ans += v[i].first;
            w -= v[i].second;
        } else {
            double ratio=(double)v[i].first/v[i].second;
            ans+=ratio*w;
            w=0;
        }
    }
    cout<<"The Maximum profit earned is: "<<ans<<endl;
    return 0;
}