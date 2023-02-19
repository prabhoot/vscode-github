// Get the input of student: Name, Roll No, Marks in 6 subjects in 12th. Find if
// the student is eligible for admission in Delhi University. A student is
// eligible for DU if he has scored 95 % or more in Best 4.
// Kanchan 29
// 95 99 98 96 95 99
#include <algorithm>
#include <iostream>
#include <stack>
#include <string>
#define no_of_subjects 6
using namespace std;
int main() {
  cout<<"Kanchan's Code:\n";
  struct student {
    string name;
    int rollno;
    float arr[6];
  };
  struct student str;
  cin >> str.name >> str.rollno;
  for (int j = 0; j < no_of_subjects; j++) {
    cin >> str.arr[j];
  }
  int sum{};
  sort(str.arr, (str.arr) + 6);
  for (int i = 2; i < no_of_subjects; i++) {
    sum += str.arr[i];
  }
  int result = sum * 100 / 400;
  if (result >= 95) {
    cout << str.name << " is "
         << "pass in the exam.\n";
  } else {
    cout << str.name << " "
         << "fail\n";
  }
  return 0;
}