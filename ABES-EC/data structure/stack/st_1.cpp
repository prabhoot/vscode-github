// Program for Stack Primitive Operations
#include <iostream>
using namespace std;
#define n 3
struct stack {
  int item[n];
  int top;
};
struct stack s;
void initilize() { s.top = -1; }
void push(int x) {
  if (s.top == n - 1) {
    cout << "stack overflow\n";
    return;
  }
  s.top++;
  s.item[s.top] = x;
}
void pop() {
  if (s.top == -1) {
    cout << "stack under flow\n";
    return;
  }
  s.top--;
}
int top() {
  if (s.top == -1) {
    cout << "nothing to display";
    return -1;
  } else {
    return s.item[s.top];
  }
}
bool isempty() {
  if (s.top == -1) {
    return true;
  } else {
    return false;
  }
}
int main() {
  initilize();
  cout<<" 1 for empty stack "<<isempty()<<endl  ;
  struct stack s;
  push(1);
  push(2);
  cout <<"TOP: "<< top()<<endl;
  push(3);
  cout<<"TOP: "<<top()<<endl;
  pop();
  cout<<"TOP: "<<top();
  cout<<"0 for non empty stack "<<isempty();
  return 0;
}