#include <iostream>
#include <stack>
#include <string>
#include <system_error>
#include <vector>
using namespace std;
int eval(vector<string> v) {
  stack<int> s;
  for (int i = 0; i < v.size(); i++) {
    if (v[i] == "+" || v[i] == "-" || v[i] == "*" || v[i] == "/") {
      int b = s.top();
      s.pop();
      int a = s.top();
      s.pop();
      if (v[i] == "+") {
        s.push(a + b);
      }
      else if(v[i]=="-"){
        s.push(a-b);
      }
      else if (v[i]=="*") {
      s.push(a*b);
      }
      else {
      s.push(a/b);
      }
    }
    else {
    s.push(stoi(v[i]));
    }
  }
  return s.top();
}
using namespace std;
int main() {
  int i = 0;
  vector<string> a{"2", "1", "+", "3", "*"};
  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
  }
  cout<<endl;
  cout<<eval(a);
  return 0;
}