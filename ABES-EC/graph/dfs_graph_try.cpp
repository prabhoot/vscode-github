#include <iostream>
#include <vector>
#include <utility>
using namespace std;
void dfs(vector<int>aj[],int vertex,int visited[]){
  
    int count=0;
    
}
int dsf_visit(int i,int visited[],int element,vector<int>aj[]){
    visited[i]=1;
    cout<<i<<" ";
    element++;
    for(auto j:aj[i]){
        if (visited[j]==0) {
        element=dfs_visit(j,visited,element);
        }
    }
    return element;
}
int main(){
    int vertex;
    cin>>vertex;
  int visited[vertex];
    for(int i=0;i<vertex;i++){
        visited[i]=0;
    }
}
