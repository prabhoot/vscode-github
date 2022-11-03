#include <iostream>
using namespace std;
int main() {
  int n = 3;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i; j++) {
      cout << " "<<n-j;
    }
    if (i > 0) {
      for (int j = 0; j<(2*i-1); j++) {
        cout << "  ";
      }
    }
    for(int j=0;(j<n-i);j++){
      if(i==0&&j==0){continue;;
    }
      else{cout<<" "<<n-j;}}
    if(i!=2){cout << endl;}
  }
  for (int i = n; i>=0; i--) {
    for (int j = 0; j < n - i; j++) {
      cout << " "<<n-j;
    }
    if (i<n) {
      for (int j = 0; j<(2*i-1); j++) {
        cout << "  ";
      }
    }
    for(int j=0;(j<n-i);j++){
      if(i==0&&j==0){continue;;
    }
      else{cout<<" "<<n-j;}}
    cout << endl;
  }
  return 0;
}