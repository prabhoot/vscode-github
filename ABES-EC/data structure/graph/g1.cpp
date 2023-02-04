// Program to read a graph and print the adjacency List
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int v;
    int e;
    int a,b;
    cout<<"how many vertices";
    cin>>v;
    cout<<"how many edges";
    cin>>e;
    vector<int >adj[v];
    for(int i=0;i<e;i++){
        cout<<"enter the end points of the edge";
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int counter=0;
    for(int i=0;i<v;i++){
        cout<<i<<":";
        for(auto j:adj[i]){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}