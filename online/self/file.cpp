#include <iostream>
using namespace std;

int main() {
  char arr[] = "rahul is a boy";
  int counter = 0;
  int max = 0;
  for (char i: arr){
    if (i==' '){
      if (max < counter){
        max = counter;
      counter = -1;
      }
    counter++;
    }
  cout << max<<endl;
  return 0;
  }
  
} 