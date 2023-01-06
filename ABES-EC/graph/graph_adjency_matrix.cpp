#include <iostream>
using namespace std;
int main() {
  int v = 0;
  int e = 0;
  int a;
  int b;
  int adj_mat[v][v];
  // cout<<"how many vertices in the graph:\n";
  cin >> v;
  // cout<<"how many edges in the graph:\n";
  cin >> e;
  int arr[v][v];
  for (int i = 0; i < v; i++) {
    for (int j = 0; j < v; j++) {
      adj_mat[i][j] = 0;
    }
  }cout<<endl;
  for (int i = 0; i < v; i++) {
    for (int j = 0; j < v; j++) {
      cout << adj_mat[i][j];
    }
    cout << endl;
  }
  for (int i = 0; i < v; i++) {
    // cout<<"enter the end points of the with respect to "<<i+1<<endl;
    cin >> a >> b;
    adj_mat[a][b] = 1;
    adj_mat[b][a] = 1;
  }
  cout<<endl;
  for (int i = 0; i < v; i++) {
    for (int j = 0; j < v; j++) {
      cout << adj_mat[i][j];
    }
    cout << endl;
  }
  return 0;
}

// for input just copy paste below data.
/*
5 5
//edges
0 1
1 2
2 4
4 3
3 2
*/