// Program to find the no of connected components and no of elements in each
// connected component in the undirected Graph
#include <iostream>
#include <stack>
#include <vector>
using namespace std;
  stack<int> s;
  vector<int> status(5, 0);
void no_connected_com(int v, int start_node, vector<int> adjlist[5]) {
  status[0] = 1;
  s.push(0);
  while (!s.empty()) {
    int i = s.top();
    s.pop();
    status[i] = 1;
    cout << i << " ";
    for (int j = 0; j < adjlist[i].size(); j++) {
      int x = adjlist[i][j];
      if (status[x] == 0) {
        // cout<<i;
        s.push(x);
        status[x] = 1;
      }
    }
  }
}

int main() {
  int v = 4;
  vector<int> adjlist[5] = {{4}, {}, {3, 4}, {2, 4}, {0, 2, 3}};
  // for (int i = 0; i < v; i++) {
  //   cout << i << ":";
  //   for (auto j : adjlist[i]) {
  //     cout << j << " ";
  //   }
  //   cout << endl;
  // }
  for (int i = 0; i < v; i++) {
    if(status[i]==0){no_connected_com(v, i, adjlist);}
  }
  return 0;
}