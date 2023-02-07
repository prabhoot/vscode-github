// Program to read the adjacency matrix and convert that to Adjacency List
#include <iostream>
#include <vector>
#define mat_size 10
using namespace std;
void convert_to_adjlist(int v, int adjmat[][mat_size]) {
  vector<int> adjlist[mat_size];
  for (int i = 0; i < v; i++) {
    for (int j = 0; j < v; j++) {
      if (adjmat[i][j] != 0) {
        adjlist[i].push_back(j);
      }
    }
  }
  for (int i = 0; i < v; i++) {
    cout << i << ":";
    for (auto j : adjlist[i]) {
      cout << j;
    }
    cout << endl;
  }
}
int main() {
  cout << "enter the number of rows in adjacency matrix: ";
  int v;
  cin >> v;
  int adjmat[mat_size][mat_size];
  for (int i = 0; i < v; i++) {
    for (int j = 0; j < v; j++) {
      cin >> adjmat[i][j];
    }
  }
  convert_to_adjlist(v, adjmat);
  return 0;
}