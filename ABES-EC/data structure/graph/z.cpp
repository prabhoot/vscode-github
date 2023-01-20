// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int DFS_Visit(int i, vector<int> Visited, vector<int> AdjList[], int Elements) {
  // cout<<i;
  Visited[i] = 1;
  Elements = Elements + 1;
  for (auto j:AdjList[i]) {
    if (Visited[j] == 0) {
      DFS_Visit(j, Visited, AdjList, Elements);
    }
  }
  return Elements;
}
void DFS(vector<int> AdjList[], int V) {
  int count = 0;
  vector<int> Visited(V);
  for (int i = 0; i < V; i++){
    if (Visited[i] == 0) {
      count = count + 1;
      int Elements = 0;
      Elements = DFS_Visit(i, Visited, AdjList, Elements);
    }
  }
  
}
int main() {
  int V, E;
//   cout << "enter vertex";
  cin >> V;
//   cout << "enter edge";
  cin >> E;
  vector<int> AdjList[V];
  for (int i = 1; i < E + 1; i++) {
    // cout << "enter edges" << i;
    int a, b;
    cin >> a >> b;
    AdjList[a].push_back(b);
    AdjList[b].push_back(a);
  }
  for (int i = 0; i < V; i++) {
    cout << i << ":";
    for (int j = 0; j < AdjList[i].size(); j++)
      cout << AdjList[i][j];
    cout << endl;
  }
cout<<DFS(AdjList, V);
  return 0;
}



// /*
// 5 5
// 0 1
// 1 2
// 2 4
// 4 3
// 3 2