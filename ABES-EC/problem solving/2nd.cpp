
#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define io                        \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
signed main() {
    vector<int> v1, v2;
    vector<pair<int, int>> v;
    int temp = 0, i = 0;
    while (cin >> temp && cin.get() != '\n') {
        v1.push_back(temp);
    }
    v1.push_back(temp);
    temp = 0, i = 0;
    while (cin >> temp && cin.get() != '\n') {
        v2.push_back(temp);
    }
    v2.push_back(temp);
    int n = v1.size();
    for (int i = 0; i < n; i++) {
        v.push_back({v1[i], v2[i]});
    }
    sort(all(v));
    for (int i=0;i<n-1;i++){
        cout<<v[i].second<<" ";
    }
    
    // string str;
    // for(auto i:v){
    //     str=str+to_string(i.second)+" ";
    // }
    // cout<<str;
    return 0;
}

// 5 3 7 12 8
// 12 45 65 34 22

