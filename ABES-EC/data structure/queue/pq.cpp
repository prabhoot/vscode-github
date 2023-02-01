#include <functional>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main() {
  //   priority_queue<int> pq;
  //   pq.push(8);
  //   pq.push(6);
  //   pq.push(4);
  //   pq.push(3);
  //   pq.push(9);
  //   pq.push(1);
  //   pq.push(0);
  //   int n= pq.size();
  //   for (int i = 0; i <n; i++) {
  //     cout << pq.top()<<" ";
  //     pq.pop();
  //   }
  // input 9 8 6 4 3 1 0
  priority_queue<int, vector<int>, greater<int>> pq;
  pq.push(8);
  pq.push(6);
  pq.push(4);
  pq.push(3);
  pq.push(9);
  pq.push(1);
  pq.push(0);
  int n = pq.size();
  for (int i = 0; i < n; i++) {
    cout << pq.top() << " ";
    pq.pop();
  }
  return 0;
//   0 1 3 4 6 8 9
}