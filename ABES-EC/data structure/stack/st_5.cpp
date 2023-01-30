// Program for Decimal to Any Base Conversion
#include "stack.h"
void decimal_to_anybase(int n, int base) {
  char arr[]{'A', 'B', 'C', 'D', 'E', 'F'};
  while (n) {
    push(n % base);
    n = n / base;
  }
  while (s.top != -1) {
    int x = pop();
    if (x >= 9) {
      x = x % 10;
      cout << arr[x];
    } else {
      cout << x;
    }
  }
}
int main() {
  int t = 4;
  while (t--) {
    initial();
    int n, base;
    cin >> n >> base;
    cout << "The result is:";
    decimal_to_anybase(n, base);
    cout << " base " << base;
    cout<<endl;
  }

  return 0;
}
