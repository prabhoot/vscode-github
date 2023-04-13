// Program to check the validity of Bracketed Arithmetic Expression using Stack
// input:-
// [()]{}{[()()]()}
// ({)}
// 40 ( ,41 ),91 [,93 ],123 { ,125 }
#include "stack.h"
#include <string>
void checked_brackted(string str) {
  int i = 0;
  initial();
  struct stack s;
  while (str[i] != '\0') {
    if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
      push(str[i]);
    } else if (str[i] == ')' || str[i] == '}' || str[i] == ']') {
      if (str[i] == stacktop() + 1 || str[i] == stacktop() + 2) {
        pop();
      } else {
        cout << "NOT Bracketed Arithmetic Expression \n";
        return;
      }
    }
    i++;
  }
  cout << " Bracketed Arithmetic Expression \n";
}
int main() {
  string str;
  cin >> str;
  checked_brackted(str);
}