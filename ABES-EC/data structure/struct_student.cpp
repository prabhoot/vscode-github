// Get the input of student: Name, Roll No, Marks in 6 subjects in 12th. Find if
// the student is eligible for admission in Delhi University. A student is
// eligible for DU if he has scored 95 % or more in Best 4
#include <algorithm>
#include <iostream>
#define no_of_subjects 2
using namespace std;
typedef struct student {
  string name;
  long rollno;
  int a[no_of_subjects];
} st;
int main() {
  int n{1};
  // cin>>n;
  st s[n];
  int i{};
  for (int i = 0; i < n; i++) {
    cin >> s[i].name >> s[i].rollno;
    for (int j = 0; j < no_of_subjects; j++) {
      cin >> s[i].a[j];
    }
    if (i != n - 1){
      cout << "enter for other";
    }
  }
          sort(s[0].a,s[0].a+n);

  for (int i = 0; i < no_of_subjects; i++) {
    cout << s[0].a[i] << " ";
  }
  return 0;
}