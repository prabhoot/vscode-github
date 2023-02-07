#include <iostream>
#include <vector>
using namespace std;
int main(){
  int v=5;
  vector<int>adjlist[5]={{4}, {}, {3, 4}, {2, 4}, {0, 2, 3}};
  for(int i=0;i<v;i++){
    for(int j=0;j<adjlist[i].size();j++){
      cout<<adjlist[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}