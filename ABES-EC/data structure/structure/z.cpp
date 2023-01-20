#include <iostream>
#include <string>
using namespace std;
bool equal_str(string a, string b) {
  int count = 0;
  for (int i = 0, j = 0; i < a.size() && j < b.size(); i++, j++) {
    if (a[i] == b[j]||a[i]==b[j]-32||a[i]==b[j]+32) {
      count++;
    }
  }
  if (count == a.size() && count == b.size()) {
    return true;
  } else {
    return false;
  }
}
int main(){
	string a{"Ruskin Bond"};
	string b{"Ruskin bond"};
	cout<<equal_str(a, b);
	return 0;
}