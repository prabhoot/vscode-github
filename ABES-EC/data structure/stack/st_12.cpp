// Program for Infix to Postfix Conversion
#include "stack.h"
int prcd(char a) {
  if (a == '^') {
    return 3;
  } else if (a == '*' || a == '/' || a == '%') {
    return 2;
  } else if (a == '+' || a == '-') {
    return 1;
  } else
    return -1;
}
void infixtopostfix(string str) {
  int n = str.size();
  for (int i = 0; i < n; i++) {
    if (str[i]>='a'&&str[i<='z']) {
      cout << (str[i]);
    } else {
      if (isempty()) {
        push(str[i]);
      } else {
        if (prcd(stacktop()) >= prcd(str[i])) {
          while ((prcd(stacktop()) >= prcd(str[i]))) {
            cout << char(stacktop());
            pop();
          }
          push(str[i]);
        } else {
          push(str[i]);
        }
      }
    }
  }
  while(!isempty()){
    cout<<char(stacktop());pop();
  }
}
int main(){
  string str;
  cin>>str;
  infixtopostfix(str);
  cout<<endl;
}