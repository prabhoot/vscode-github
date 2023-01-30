// Program for Infix to Prefix Coversion (Infix Expression with Parenthesis)
// corr bana para kyo ki reverse function jo tha na vo "(" --> ")" krr de raha tha toh usse hi vapas sahi kiya.
#include "stack.h"
#include <algorithm>
int prcd(char a) {
  if (a == '^') {
    return 3;
  } else if (a == '*' || a == '*' || a == '/') {
    return 2;
  } else if (a == '+' || a == '-') {
    return 1;
  } else
    return -1;
}
string corr(string str){
    for(int i=0;i<str.length();i++){
        if(str[i]=='('){
            str[i]=')';
        }
        else if (str[i]==')') {
        str[i]='(';
        }
    }
    return str;
}
string infixtoprefix(string str) {
  initial();
  string prefix;
  reverse(str.begin(), str.end());
  str=corr(str);
  int n = str.length();
  for (int i = 0; i < n; i++) {
    if (str[i] >= 'a' && str[i] <= 'z') {
      prefix += str[i];
    } else {
      if (str[i] == '(') {
        push(str[i]);
      } else if (str[i] == ')') {
        while (!(stacktop() == '(')) {
          prefix += stacktop();
          pop();
        }
        pop();
      } else {
        if (isempty()) {
          push(str[i]);
        } else {
          if (prcd(stacktop()) >= prcd(str[i])) {
            while ((prcd(stacktop()) >= prcd(str[i]))) {
              prefix += stacktop();
              pop();
            }
            push(str[i]);
          } else {
            push(str[i]);
          }
        }
      }
    }
  }
  while (!isempty()) {
    prefix += stacktop();
    pop();
  }
  reverse(prefix.begin(), prefix.end());
  return prefix;
}
int main() {
  string str;
  cin>>str;
  cout << infixtoprefix(str);
  cout<<endl;
  return 0;
}