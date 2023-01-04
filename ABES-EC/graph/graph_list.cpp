#include <iostream>
#include <vector>
using namespace std;
int main(){
    int x=0;
    int e=0;
    int a=0,b=0;
    // cout<<"how many vertices in the graph:\n";
    cin>>x;
    // cout<<"how many edges in the graph:\n";
    cin>>e;
    vector<int>v[x];
    // for(int i=0;i<v;i++){
    //     // cout<<"enter the end point of the edge "<<i+1<<endl;
    //         cin>>a>>b;
    //         adjlist[a].push_back(b);
    //         adjlist[b].push_back(a);
    // }
    cout<<"t";
    v[0].push_back(1);
    v[1].push_back(0);
    v[1].push_back(2);
    v[2].push_back(1);
    v[2].push_back(4);
    v[4].push_back(2);
    v[4].push_back(3);
    v[3].push_back(4);
    v[3].push_back(2);
    v[2].push_back(3);
    cout<<"size"<<x;
    for(int i=0;i<x;i++){
        cout<<i<<": ";
        for(int j=0;j<v[i].size();i++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// 5 5
// 0 1
// 1 2
// 2 4
// 4 3
// 3 2