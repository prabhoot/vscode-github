// Program for DFS on a Graph
#include <iostream>
#include <stack>
#include <vector>
using namespace std;
void dfs(int v,int starting_node, vector<int> adjlist[4]) {
  stack<int> s;
  vector<int> status(v, 0);
  s.push(starting_node);
  while (!s.empty()) {
    int i = s.top();
    s.pop();
    status[i]=1;
    cout << i << " ";
    for (int j = 0; j < adjlist[i].size(); j++) {
      int x = adjlist[i][j];
      if (status[x] == 0) {
        s.push(x);
        status[x]=1;
      }
    }
  }
}
int main() {
  vector<int> adjlist[4] = {{2,1},{2},{3,0},{3}};
  cout<<"the DFS is: ";
  dfs(4, 0,adjlist);
  cout<<endl;
}