#include <iostream>
#include <queue>
#include <vector>
using namespace std;
    vector<int>adjlist[5];
void dfs(int v,vector<int >&pie,vector<int >&visited) {}
void dfs_visit(int i,vector<int>&visited){
    // dfs_visit(i, visited,adjlist);
    cout<<i;
    visited[i]=1;
    int n=adjlist[i].size();
    for(int j=0;j<n;j++){
           if(visited[j]==0){
            dfs_visit(j, visited);
            pie[j]=i;
           }

    }
}
int main() {
    int v=0;
    cin>>v;
    int i=0;
    vector<int>pie(v,-1);
    vector<int >visited(v,0);
    adjlist[0].push_back(1);
    adjlist[0].push_back(5);
    adjlist[1].push_back(2);
    adjlist[2].push_back(4);
    adjlist[3].push_back(2);
    adjlist[3].push_back(6);
    // adjlist[4].push_back(0);
    adjlist[5].push_back(4);
    adjlist[6].push_back(4);
    adjlist[6].push_back(7);
    adjlist[7].push_back(5);
    adjlist[8].push_back(6);
    adjlist[8].push_back(9);
    adjlist[9].push_back(7);
    int r=adjlist[i].size();
return 0; }