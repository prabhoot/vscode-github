// 11. Write a program to compare two dates entered by user. Make a structure
// named Date to store the elements day, month and year to store the dates. If
// the dates are equal, display "Dates are equal" otherwise display "Dates are
// not equal". input:- 
// 2003 10 17
// 2003 10 17
#include <iostream>
using namespace std;
struct dates {
  int year;
  int month;
  int day;
};
int main() {
  cout<<"Kanchan's Code:\n";
  int t = 2;
  while (t--) {
    struct dates d[3];
    for (int i = 0; i < 2; i++) {
      cin >> d[i].year >> d[i].month >> d[i].day;
    }
    if ((d[0].year == d[1].year) &&
        ((d[0].month == d[1].month) && (d[0].day == d[1].day))) {
      cout << "dates are equal .\n";
    } else {
      cout << "dates are not equal.\n";
    }
  }
  return 0;
}