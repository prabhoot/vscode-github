// Program for BFS on a Graph
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
void bfs(int v,vector<int>adjlist[4]){
    queue<int>q;
    vector<int>status(v,0);
    status[0]=1;
    q.push(0);
    while (!q.empty()) {
    int i=q.front();q.pop();
    cout<<i<<" ";
    for(int j=0;j<adjlist[i].size();j++){
        int x=adjlist[i][j];
        if(status[x]==0){
            status[x]=1;
            q.push(x);
        }
    }
    }
}
int main() {
    int v=4;
  vector<int> adjlist[4] = {{2,1},{2},{3,0},{3}};
  cout<<"The bsf is: ";
bfs(v,adjlist);
cout<<endl;
  return 0;
}