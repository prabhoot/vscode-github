#include <iostream>
using namespace std;
int main() {
  int n{4};
  int temp{1};
  int flag{0};
  for (int i = 0; i < n; i++) {
    for (int j = n; j > i; j--) {
      cout << " ";
    }
    for(int k=0;k<(2*i+1);k++){
      cout<<temp;,,,,,,,,,,,,,
      
        if(flag<=i){
            temp++;
            flag++;
        }
        else{
            temp--;
            flag++;
        }
        cout<<" ";
    }
    cout << endl;
  }
  return 0;
}