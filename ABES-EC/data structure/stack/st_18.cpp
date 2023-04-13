// Program for Sorting of stack
#include <iostream>
#include <stack>
using namespace std;
void sortstack(stack<int> s) {
  stack<int> t;
  for(int i=0;i<5;i++){
    if (t.empty()) {
      t.push(s.top());s.pop();
    }
    int x = s.top();s.pop();
      while (!t.empty() || !(x < t.top())) {
        s.push(t.top());t.pop();
      }
      t.push(x);
}
}
int main() {
  stack<int> s;
  s.push(3);
  s.push(1);
  s.push(5);
  s.push(2);
  s.push(4);
  sortstack(s);
  // display(s);
  return 0;
}