// Program for Infix to Prefix Coversion
#include "stack.h"
#include <algorithm>
int prcd(char a) {
  if (a == '^') {
    return 3;
  } else if (a == '*' ||a == '%'||a == '/') {
    return 2;
  }
  if (a == '+'||a == '-') {
    return 1;
  }
    return -1;
}
string infixtoprefix(string str) {
  string prefix;
  reverse(str.begin(), str.end());
  int n = str.length();
  for (int i = 0; i < n; i++) {
    if (str[i] >= 'a' && str[i] < 'z') {
      prefix += str[i];
    } else {
      if (isempty()) {
        push(str[i]);
      } else {
        if (prcd(stacktop())>=prcd(str[i])){
            while((prcd(stacktop())>=prcd(str[i]))){
                prefix+=stacktop();pop();
            }
            push(str[i]);
        }
        else {
        push(str[i]);
        }
      }
    }
  }
  while(!isempty()){
    prefix+=stacktop();pop();
  }
  reverse(prefix.begin(), prefix.end());
  return prefix;
}
int main(){
    string str;
    cin>>str;
    cout<<infixtoprefix(str);
    cout<<endl;
    return 0;
}
