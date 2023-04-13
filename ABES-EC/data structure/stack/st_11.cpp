// Program for Prefix Evaluation
#include "stack.h"
#include <algorithm>
int eval_prefix(string str) {
  int i = str.length() - 1;
  while (i > -1) {
    if (str[i] == ' ') {
      i--;
      continue;
    }
    if (str[i] == '/' || str[i] == '*' || str[i] == '+' || str[i] == '-') {
      int a = stacktop();
      pop();
      int b = stacktop();
      pop();
      switch (str[i]) {
      case '+': {
        push(a + b);
        break;
      }
      case '-': {
        push(a - b);
        break;
      }
      case '*': {
        push(a * b);
        break;
      }
      case '/': {
        push(a / b);
        break;
      }
      }
    } else if (isdigit(str[i])) {
      string num;
      while (isdigit(str[i])) {
        num += str[i];
        i--;
      }
      reverse(num.begin(), num.end());
      push(stoi(num));
      i++;
    } else {
      push(str[i] - '0');
    }
    i--;
  }
  return stacktop();
}
int main() {
  string str;
  getline(cin, str);
  cout << eval_prefix(str);
  cout << endl;
  return 0;
}