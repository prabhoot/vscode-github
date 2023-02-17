// minimum spaning tree
// input:
// 7 11
// 0 1 7
// 0 3 5
// 1 2 8
// 1 4 7
// 1 3 9
// 1 4 5
// 3 4 15
// 3 5 6
// 4 5 8
// 4 6 9
// 5 6 11
#include <cstdint>
#include <functional>
#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;
int v, e;
int main() {
  cin >> v >> e;
  vector<pair<int, int>> adjlist[v];
  for (int i = 0; i < e; i++) {
    int a, b, cost;
    cin >> a >> b >> cost;
    adjlist[a].push_back({b, cost});
    adjlist[b].push_back({a, cost});
  }
  for (int i = 0; i < v; i++) {
    cout << i << ": ";
    for (int j = 0; j < adjlist[i].size(); j++) {
      cout << adjlist[i][j].first << " ";
      cout << adjlist[i][j].second << ", ";
    }
    cout << endl;
    vector<int> inmst(v);
    vector<int> key(v, INT16_MAX);
    vector<int> pred(v, -1);
    key[0] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0,0});
    for(int i=1;i<v;i++){
        pq.push({INT16_MAX,i});
    }
    for(int i=0;i<=v-1;i++){
        pair<int, int>x=pq.top();pq.pop();
        int v=x.second;
        inmst[v]=1;
        for(int j=0;j<adjlist[v].size();j++){
            int vertex=adjlist[v][i].first;
            int weight=adjlist[v][i].second;
            if(inmst[vertex]==0&&key[vertex]>weight){
                key[vertex]=weight;
                pred[vertex]=v;
                pq.push({key[vertex],vertex});
            }
        }
    }
  cout<<"mst is:";
  cout<<"vertex  key"<<"  precessor"<<endl;
  for(int i=0;i<v;i++){
    cout<<i<<"  ";
    cout<<key[i]<<"  ";
    cout<<pred[i];
    cout<<endl;
  }
  }
  return 0;
}
