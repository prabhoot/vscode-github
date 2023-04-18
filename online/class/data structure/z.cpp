#include <iostream>
#include <string>
using namespace std;
bool isvowel(char a) {
  if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' ||
      a == 'E' || a == 'I' || a == 'O' || a == 'U') {
    return true;
  } else {
    return false;
  }
}
string reverseVowels(string s) {
  int i = 0;
  int j = s.length() - 1;
  int n=s.length();
  while (i < j) {
    while (i<n&&!isvowel(s[i])) {
      i++;
    }
    while (j>=0&&!isvowel(s[j])) {
      j--;
    }
    if (i < j) {
      swap(s[i], s[j]);
    }
  }
  return s;
}
int main() { 
    string s="abcdef";
    cout<<reverseVowels(s);
    return 0; }