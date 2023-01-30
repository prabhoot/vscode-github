#include <iostream>
#include <stack>
using namespace std;
int main() {
  int n, a;
  cin >> n;
  stack<int> s1, s2;
  for (int i = 0; i < n; i++) {
    cin >> a;
    s1.push(a);
  }
  while (!s1.empty()) {
    int k = s1.top();
    s1.pop();
    while (!s2.empty() && s2.top() < k) {
      s2.pop();
    }
    s1.push(s2.top());
    s2.push(k);
  }
  while (!s2.empty()) {
    cout << s2.top() << " ";
    s2.pop();
  }
  cout << "\n";
  return 0;
}