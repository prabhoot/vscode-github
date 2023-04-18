#include <algorithm>
#include <iostream>
#include <stack>
#include <utility>
#include <vector>
#define ll long long int
using namespace std;
int main() {
  int t = 0;
  cin >> t;
  while (t--) {
    ll n = 0;
    cin >> n;
    int count_remain = 0;
    stack<pair<ll, ll>> s1;
    stack<pair<ll, ll>> s0;
    stack<pair<ll, ll>> remain;
    int a = 0;
    int b = 0;
    pair<ll, ll> x = make_pair(0, 0);
    pair<ll, ll> y = make_pair(0, 0);
    pair<ll, ll> temp = make_pair(0, 0);
    for (ll i = 0; i < n; i++) {
      cin >> a >> b;
      temp = make_pair(i, b);
      if (a == 1) {
        s1.push(temp);
      } else {
        s0.push(temp);
      }
    }
    while (!s1.empty() && !s0.empty()) {
      x = s1.top();
      s1.pop();
      y = s0.top();
      s0.pop();
      if (x.first < y.first) {
        if (x.second == y.second) {
          continue;
        } else if (x.second < y.second) {
          y.second += x.second;
          s0.push(y);
        } else {
          x.second += y.second;
          s1.push(x);
        }
      } else {
        remain.push(x);
        s0.push(y);
      }
    }
    vector<ll> v;
    while (!s1.empty()) {
      count_remain++;
      x = s1.top();
      s1.pop();
      v.push_back(x.first);
    }
    while (!s0.empty()) {
      count_remain++;
      x = s0.top();
      s0.pop();
      v.push_back(x.first);
    }
    while (!remain.empty()) {
      count_remain++;
      x = remain.top();
      remain.pop();
      v.push_back(x.first);
    }
    cout << count_remain;
    if (count_remain != 0) {
      cout << endl;
      sort(v.begin(), v.end());
      for (auto i : v) {
        cout << i + 1 << " ";
      }
      cout << endl;
    }
  }
  return 0;
}