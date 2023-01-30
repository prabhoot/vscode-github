// Program for Infix to Postfix Coversion (Infix Expression with Parenthesis)
#include "stack.h"
int prcd(char a){
    if(a=='^'){
        return 3;
    }
    else  if(a=='*'||a=='%'||a=='/'){
        return 2;
    }
    else  if(a=='+'||a=='-'){
        return 1;
    }
    else {
    return -1;
    }
}
string infixtopostfix(string str) {
  string postfix;
  int n = str.length();
  for (int i = 0; i < n; i++) {
    if (str[i] >= 'a' && str[i] <= 'z') {
      postfix += str[i];
    } else {
      if (str[i] == '(') {
        push(str[i]);
      } else if (str[i] == ')') {
        while (!(stacktop() == '(')) {
          postfix += stacktop();
          pop();
        }
        pop();
      }
      else {
      if(isempty()){
        push(str[i]);
      }
      else {
      if(prcd(stacktop())>=prcd(str[i])){
        while((prcd(stacktop())>=prcd(str[i]))){
            postfix+=stacktop();pop();
        }
        push(str[i]);
      }
      else {
      push(str[i]);
      }
      }
      }
    }
  }
  while(!isempty()){
    postfix+=stacktop();pop();
  }
  return postfix;
}
int main(){
    string str;
    cin>>str;
    cout<<infixtopostfix(str);
    cout<<endl;
    return 0;
}