// Program for implementation of 2 stacks using a single Array
#include <iostream>
#define size 10
using namespace std;
int arr[size];
int top1 = -1;
int top2 = size;
void push1(int x) {
  if (top1 + 1 < top2) {
    top1++;
    arr[top1] = x;
  } else {
    cout << "stack overflow1\n";
    exit(1);
  }
}
void push2(int x) {
  if (top2 - 1 > top1) {
    top2--;
    arr[top2] = x;
  } else {
    cout << "stack overflow2\n";
    exit(1);
  }
}
int pop1() {
  if (top1 == -1) {
    cout << "stack under flow1\n";
    exit(1);
  } else {
    int x = arr[top1];
    top1--;
    return x;
  }
  return 0;
}
int pop2() {
  if (top2 == size) {
    cout << "stack under flow2\n";
    exit(1);

  } else {
    int x = arr[top2];
    top2++;
    return x;
  }
  return 0;
}
int stacktop(int a) {
  if (a == 1) {
    return arr[top1];
  } else {
    return arr[top2];
  }
}
int main() {
  push2(1);
  push2(2);
  push2(3);
  push2(4);
  push2(5);
  push2(6);
  push2(7);
  push1(8);
  push1(9);
  push1(10);
  push1(11);
  cout <<"stacktop of 1st stack "<< stacktop(1) << " ";
  cout<<endl;
  cout <<"stacktop of 1st stack "<< stacktop(2) << " ";
  cout<<endl;
  pop1();
  pop2();
  cout<<"stacktop of 1st stack " << stacktop(1) << " ";  cout<<endl;
  cout <<"stacktop of 1st stack "<< stacktop(2) << " ";  cout<<endl;

  return 0;
}