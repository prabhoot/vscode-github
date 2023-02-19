// 3. Write a program to store and print the roll no., name, age, address and
// marks of 3 students using structure.
//  input:-
// 1 kanchan 19 Hapur
//  95 99 98 96 95 99 
// 2 bhumi 19 Delhi 
// 95 99 98 96 95 99 
// 3 riya 19 lucknow 
// 95 99 98 96 95 99
#include <iostream>
using namespace std;
#define no_of_subjects 6
#define no_of_students 3
int main() {
  cout<<"Kanchan's Code:\n";
  struct student {
    int rollno;
    string name;
    int age;
    string address;
    float marks[no_of_subjects];
  };
  struct student s[no_of_students];
  for (int i = 0; i < no_of_students; i++) {
    cin >> s[i].rollno >> s[i].name >> s[i].age;
    cin.ignore();
    getline(cin, s[i].address);
    for (int j = 0; j < no_of_subjects; j++) {
      cin >> s[i].marks[j];
    }
  }
  for (int i = 0; i < no_of_students; i++) {
    cout << "rollno = " << s[i].rollno << " name = " << s[i].name
         << " age = " << s[i].age << " address = " << s[i].address << endl;
    for (int j = 0; j < no_of_subjects; j++) {
      cout << s[i].marks[j] << ", ";
    }
    cout << endl;
  }
  return 0;
}