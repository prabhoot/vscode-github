// Program for Postfix Evaluation|| solving postfix.
#include "stack.h"
#include <cctype>
#include <string>
int postfix_eval(string str) {
  initial();
  int i = 0;
  while (str[i] != '\0') {
    if (str[i] ==' ') {
      i++;
      continue;
    }
    if (str[i] == '+' || str[i] == '-' || str[i] == '/' || str[i] == '*') {
      int b = stacktop();
      pop();
      int a = stacktop();
      pop();
      int c = 0;
      switch (str[i]) {
      case '+': {
        push(a + b);
        break;
      }
      case '-': {
        push(a - b); 
        break;
      }
      case '*':
        push(a * b);
        break;
      case '/':
        push(a / b);
        break;
      }
    } else if (isdigit(str[i])) {
      int num = 0;
      while (isdigit(str[i])) {
        num = num * 10 + (str[i] - '0');
        i++;
      }
      push(num);
      i--;
    }
    i++;
  }
  return stacktop();
}
int main() {
  string str;
  getline(cin,str);
  cout <<"The Answer is: "<< postfix_eval(str) << endl;
  return 0;
}