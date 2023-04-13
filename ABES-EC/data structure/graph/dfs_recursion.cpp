#include <iostream>
#include <vector>
using namespace std;
  vector<int> adjlist[4] = {{2,1},{2,3},{3,0},{3,1}};
  vector<int>status(4,0);
void dfs_rec(int starting_node){
    cout<<starting_node;
    status[starting_node]=1;
    for(auto i:adjlist[starting_node]){
        if(status[i]!=0){
            // status[i]=1;
            dfs_rec(i);
        }
    }
}
int main(){
        int v=4;
  for(int i=0;i<=v;i++){
    if(status[i]==0){dfs_rec(i);}
  }
    return 0;
}