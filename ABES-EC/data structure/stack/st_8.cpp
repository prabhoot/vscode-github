// Program to check if the given number is a palindrome using stacks
#include "stack.h"
#include <string>
void check_palidrome(string str) {
  int n = str.length();
  int mid = n / 2;
  if (n % 2 == 0) {
    for (int i = 0; i < mid; i++) {
      push(str[i]);
    }
    for (int i = mid; i < n; i++) {
      if (str[i] == stacktop()) {
        pop();
      }
      else {
      cout<<"not palindrome\n";
      return;
      }
    }
    cout<<"numeber is palindrome.\n";
  }
  else {
      for (int i = 0; i < mid; i++) {
      push(str[i]);
    }
    for (int i = mid+1; i < n; i++) {
      if (str[i] == stacktop()) {
        pop();
      }
      else {
      cout<<"not palindrome\n";
      return;
      }
    }
    cout<<"numeber is palindrome.\n";
  }
}
int main(){
    int a;
    cin>>a;
    check_palidrome(to_string(a));
}