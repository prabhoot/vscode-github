// Program to check the validity of Parenthesized Arithmetic Expression using
// Stack.
// input:-
// (2 + 5) 6
#include "stack.h"
void check_parenthesis(string str) {
  initial();
  struct stack s;
  int i{};
  int count = 0;
  while (str[i] == '\0') {
    char x = str[i];
    if (x == '(') {
      push(x);
      count++;
    } else if (str[i] == ')') {
      pop();
      count--;
    }
    i++;
  }
  if(count==0){
    cout<<"valid Parenthesized Arithmetic Expression\n";
  }
  else {
    cout<<" NOT valid Parenthesized Arithmetic Expression\n";
  }
}
int main() {
  string str;
  cin >> str;
  check_parenthesis(str);
  return 0;
}