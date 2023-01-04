#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector<int> v;
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  v.pop_back();//returns no value.
  cout<<"The capacity of vector is: "<<v.capacity();
  cout<<endl;
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << endl;
  for (auto i : v) {
    cout << i << " ";
  }
  return 0;
}
