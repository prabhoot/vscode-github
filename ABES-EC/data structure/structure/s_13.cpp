// 13. Let us work on the menu of a library. Create a structure containing book
// information like accession number, name of author, book title and flag to
// know whether book is issued or not. Create a menu in which the following can
// be done.
//  1 - Display book information
//  2 - Add a new book
//  3 - Display all the books in the library of a particular author
//  4 - Display the number of books of a particular title
//  5 - Display the total number of books in the library
//  6 - Issue a book
// input:-
// 001 priyanka
// unfinished
// 1
// 002 ravi sastri
// star gazing
//  0

#include <cstring>
#include <iostream>
#include <string>
using namespace std;
int n = 4;
struct library {
  int acc_no;
  string auth_name;
  string book_name;
  bool available;
};
void display(struct library l[]) {
  for (int i = 0; i < n; i++) {
    cout << l[i].acc_no << " " << l[i].auth_name << " -> " << l[i].book_name
         << " " << l[i].available << endl;
  }
  cout << endl;
}
void add_book(struct library l[]) {
  n++;
  string str;
  cin.ignore();
      getline(cin, str);
  l[n - 1].auth_name = str;
  cin.ignore();
      getline(cin, str);
  l[n - 1].book_name = str;
  l[n - 1].acc_no = n;
  l[n - 1].available = 1;
}
bool equal_str(string a, string b) {
  int count = 0;
  for (int i = 0, j = 0; i < a.size() && j < b.size(); i++, j++) {
    if (a[i] == b[j] || a[i] == b[j] - 32 || a[i] == b[j] + 32) {
      count++;
    }
  }
  if (count == a.size() && count == b.size()) {
    return true;
  } else {
    return false;
  }
}
void d_auth(struct library l[], string key) {
  for (int i = 0; i < n; i++) {
    if ((equal_str(l[i].auth_name, key))) {
      cout << l[i].acc_no << " " << l[i].auth_name << " -> " << l[i].book_name
           << " " << l[i].available << endl;
    }
  }
  cout << endl;
}
void d_title(struct library l[], string key) {
  for (int i = 0; i < n; i++) {
    if ((equal_str(l[i].book_name, key))) {
      cout << l[i].acc_no << " " << l[i].auth_name << " -> " << l[i].book_name
           << " " << l[i].available << endl;
    }
  }
  cout << endl;
}
void issue_book(struct library l[], int x) {
  if (!(l[x - 1].available)) {
    cout << "NOT AVAILABLE\n";
  } else {
    l[x - 1].available = 0;
    cout << "Issued successfully\n";
  }
  cout << endl;
}
int main() {
  cout<<"Kanchan's Code:\n";
  int n = 1;
  struct library l[10];
  l[0] = {1, "auth_1","title_1", 1};
  l[1] = {2, "auth_2","title_2", 0};
  l[2] = {3, "auth_2","title_3", 1};
  l[3] = {4, "auth_4","title_3", 0};
  cout << " this is a e-library\n";
  while (n != 0) {
    cout << "1 - Display book information\n";
    cout << "2 - Add a new book\n";
    cout << "3 - Display all the books in the library of a particular author\n";
    cout << "4 - Display the number of books of a particular title\n";
    cout << "5 - Display the total number of boxoks in the library\n";
    cout << "6 - Issue a book\n";
    cout << "0 - To exit the library\n";
    cin >> n;
    switch (n) {
    case 0: {
      break;
    }
    case 1: {
      display(l);
      break;
    }
    case 2: {
      add_book(l);
      break;
    }
    case 3: {
      string auth;
      cin.ignore();
      getline(cin, auth);
      d_auth(l, auth);
      break;
    }
    case 4: {
      string title;
      cin.ignore();
      getline(cin, title);
      d_title(l, title);
      break;
    }
    case 5: {
      cout << "the total number of books in the library are:" << ::n << "\n\n";
      break;
    }
    case 6: {
      int x;
      cin >> x;
      issue_book(l, x);
      break;
    }
    default: {
      cout << "INVALID INPUT TRY AGAIN\n\n";
      break;
    }
    }
  }
  return 0;
}