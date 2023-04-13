// Parking Queue Stigma
#include <algorithm>
#include <iostream>
using namespace std;
string str;
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x = 0;
    cin >> x;
    str += x;
  }
  string str2 = str;
  transform(str2.begin(), str2.end(), str2.begin(), ::toupper);
  int a=str2[0];
  for(auto i:str2){
    if(str2[i]!=a+i){
        if(n-i>i){
            for(;i<n;i++){
                cout<<str[i];
            }
        }
        else {
    for(int j=0;j<i;j++){
        cout<<str[j];
    }
        }
    }
  }
  return 0;
}