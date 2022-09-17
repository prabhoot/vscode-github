#include <iostream>
using namespace std;
int main() {
  int a[65]{26,27,29,29,28,0}; // 29 repeted
  int temp{};
  int i{};
  while (i < 6) {
    int flag{};
    for (int j = i+1; j < 6; j++) {
      if (a[i] == a[j] && flag == 0) {
        cout << a[i]<<endl;
        flag++;
      }
    }
    i++;
  }
  return 0;
}