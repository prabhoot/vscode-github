#include <cmath>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int temp = 0;
int function() {
  queue<int> q  ;
  int n = 12;
//   cin >> n;
  vector<int> status(n + 1, -1);
  q.push(n);
  status[n] = 0;
  int t=13;
  while (q.empty()!=1) {
    int x = q.front();
    q.pop();
    status[x] = status[temp] + 1;
    temp = x;
    int a = 0, b = 0;
        cout<<"a";
    for (int i = 2; i < sqrt(x); i++) {
      if (x % i == 0) {
        a = i;
        b = x / a;
        int y = max(a, b);
        q.push(y);
      }
    }
    q.push(n - 1);
    if(n-1==0){
        return status[n-1];
        break;
    }
  }
  return status[0];
}
int main() { 
    cout<<function();
    return 0; }