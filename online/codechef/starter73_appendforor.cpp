#include <iostream>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    int y;
    cin >> n >> y;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    int temp = arr[0];
    for (int i = 1; i < n; i++) {
      temp |= arr[i];
    }
    temp = y - temp;
    int temp2;
    temp2 = y & temp;
    if (temp == temp2) {
      cout << temp << endl;
    }
    else {
    cout<<"-1\n";
    }
  }
  return 0;
}