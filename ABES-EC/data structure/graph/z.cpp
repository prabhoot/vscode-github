#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef pair<int, int> ipair;
int main() {
  int n, e, i, a, b, cost;
  cin >> n;
  vector<pair<int, int>> adj[n];
  cin >> e;
  for (i = 1; i <= e; i++) {
    cin >> a >> b >> cost;
    adj[a].push_back({b, cost});
    adj[b].push_back({a, cost});
  }
  for (i = 0; i < n; i++) {
    int j = 0;
    cout << i << ":";
    for (int j = 0; j < adj[i].size(); j++) {
      cout << "(" << adj[i][j].first << ",";
      cout << adj[i][j].second << "), ";
    }
    cout << endl;
  }
  vector<int> InPQ(n, 1);
  vector<int> distance(n, INT_MAX);
  vector<int> predecessor(n, -1);
  priority_queue<ipair, vector<ipair>, greater<ipair>> pq;
  int source;
  cout << endl << "enter the source vertex:=>";
  cin >> source;
  pq.push({0, source});
  distance[source] = 0;
  for (i = 0; i < n && i != source; i++) {
    pq.push({INT_MAX, i});
  }
  for (i = 1; i <= n - 1; i++) {
    pair<int, int> x = pq.top();
    pq.pop();
    int v = x.second;
    InPQ[v] = 0;
    for (int j = 0; j < adj[v].size(); j++) {
      int vertex = adj[v][j].first;
      int weight = adj[v][j].second;
      if (InPQ[vertex] == 1 && distance[vertex] > weight + distance[v]) {
        distance[vertex] = weight + distance[v];
        predecessor[vertex] = v;
        pq.push({distance[vertex], vertex});
      }
    }
  }
  cout << "Shortest path is" << endl;
  cout << "vertex   distance"
       << " predecessor" << endl;
  for (i = 0; i < n; i++) {
    cout << i << "\t";
    cout << distance[i] << "\t";
    cout << predecessor[i];
    cout << endl;
  }
}