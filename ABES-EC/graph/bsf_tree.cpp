#include <iostream>
#include <map>
#include <utility>
#include <vector>
#include <queue>
using namespace std;
vector<int> bsf(vector<int> aj[], int vertex) {
    vector<int>visited(vertex);
    vector<int>bsf;
    queue<int>q;
  for (int i = 0; i <vertex; i++) {
    q.push(i);
    int temp=q.front();q.pop();
    visited[temp]=1;
    bsf.push_back(temp);
    for(auto j:aj[i]){
        if(visited[j]==1){
            q.push(j);
        }
    }
  }
  return bsf;
}
int main() {
  map<int, char> map;
  map[0] = 'a';
  map[1] = 'b';
  map[2] = 'c';
  map[3] = 'd';
  map[4] = 'e';
  int v;
  cin >> v;
  int e;
  cin >> e;
  vector<int> edge[v];
  for (int i = 0; i < v; i++) {
    int a, b;
    cin >> a >> b;
    edge[a].push_back(b);
    edge[b].push_back(a);
  }
  cout << endl;
  return 0;
}
// for input just copy paste below data.
/*
5 5
0 1
1 2
2 4
4 3
3 2
*/