#include <iostream>
#include <string>
using namespace std;

string reverseVowels(string s) {
  // int n =s.length();
  // int i = 0, j = n - 1;
  // string vowel="aeiouAEIOU";
  // while (i < j) {
  //   while ((vowel.find(s[i]))){
  //     i++;
  //   }
  //    while ((vowel.find(s[j]))) {
  //     j--;
  //   }
  //   if(i<j){swap(s[i], s[j]);
  //   i++;
  //   j--;}
  // }
  // return s;
  for (int i = 0, j = s.size() - 1; i < j; ) 
            if ((i=s.find_first_of("aeiouAEIOU", i)) < (j=s.find_last_of("aeiouAEIOU", j)))
              swap(s[i++], s[j--]);
        s.find_
        return s;
}
int main() {
  string str = "leetcode";
  cout << str << endl;
  str = reverseVowels(str);
  cout << str;
  return 0;
}