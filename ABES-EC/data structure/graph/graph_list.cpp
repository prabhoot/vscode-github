#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main() {
  int x = 0;
  int e = 0;
  int a = 0, b = 0;
//   cout<<"how many vertices in the graph:\n";
    cin >> x;
//   cout<<"how many edges in the graph:\n";
    cin >> e;
  vector<int> v[5];
    map<int, char> map;
    map[0]='a';
    map[1]='b';
    map[2]='c';
    map[3]='d';
    map[4]='e';
  for(int i=0;i<x;i++){
    //   cout<<"enter the end point of the edge "<<i+1<<endl;
          cin>>a>>b;
          v[a].push_back(b);
          v[b].push_back(a);
  }
  cout<<"the adjacency list is:\n";
  for (int i = 0; i < 5; i++) {
    cout <<  map[i] << ": ";
    for (int j = 0; j < v[i].size(); j++) {
      cout << v[i][j] << " ";
    }
    cout << endl;
  }
  int arr[x][x];
  for(int i=0;i<n;)
  cout<<"the adjacency matrix is:\n";

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
