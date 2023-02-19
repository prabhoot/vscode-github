// Program to find the no of connected components and no of elements in each
// connected component in the undirected Graph can also be done by set data
// structure. https://www.youtube.com/watch?v=3blAPcKp9r4
#include <iostream>
#include <vector>
using namespace std;
vector<int> visited(9, -1);
  int vertex[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
  int v = 9;
  vector<int> adj_list[] = {{1,3},{0,2},{1,3},{0,2},{5},{4},{7,8},{6,8},{6,7}};
void dfs(int v){
    visited[v]=1;
    cout<<v;
    for(auto i:adj_list[v]){
        if(visited[i]==-1){
            dfs(i);
        }
    }
}
int connected_components() {
  int count = 0;
  for (int i = 0; i < v; i++) {
    if(visited[i]==-1){
        dfs(i);
        count++;
    }
  }
  cout<<endl<<"The number of connected component are: ";
  return count;
}
int main() {
  cout<<connected_components();
  cout<<endl;
  return 0;
}