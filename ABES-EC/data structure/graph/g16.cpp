//single souce shortest path using Dijkstra  method(sssp)
// INPUT:-
// 7 11
// 0 1 7
// 0 3 5
// 1 2 8
// 1 4 7
// 1 3 9
// 1 4 5
// 3 4 15
// 3 5 6
// 4 5 8
// 4 6 9
// 5 6 11

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> ipair;
int main(){
    int n,e,i,a,b,cost;
    // cout<<"enter the number of vertices ";
    cin>>n;
    vector<pair<int, int>>adj[n];
    // cout<<"enter the number of edges ";
    cin>>e;
    for(i=1; i<=e; i++){
        // cout<<"enter the endpoints of edge followed by cost"<<i<<":";
        cin>>a>>b>>cost;
        adj[a].push_back({b,cost});
        adj[b].push_back({a,cost});
    }
    for(i=0; i<n; i++){
        int j=0;
        cout<<i<<":";
        for(int j=0; j<adj[i].size(); j++){
            cout<<"("<<adj[i][j].first<<",";
            cout<<adj[i][j].second<<"), ";
        }
        cout<<endl;
    }
    vector<int>InPQ(n,1);
    vector<int>distance(n,INT_MAX);
    vector<int>predecessor(n,-1);

    priority_queue <ipair, vector <ipair>, greater<ipair>> pq;
    int source;

    cout<<endl<<"enter the source vertex:=>";
    cin>>source;

    pq.push({0,source});
    distance[source]=0;

    for(i=0; i<n && i!=source;i++){
        pq.push({INT_MAX,i});
    }
    for(i=1; i<=n-1; i++){
        pair<int,int>x=pq.top();
        pq.pop();

        int v=x.second;
        InPQ[v]=0;
        for(int j=0; j<adj[v].size(); j++){
            int vertex=adj[v][j].first;
            int weight=adj[v][j].second;
            if(InPQ[vertex]==1 && distance[vertex]>weight+distance[v]){
                distance[vertex]=weight+distance[v];
                predecessor[vertex]=v;
                //updated key value getting stored in the pq
                //pair key,vertex
                pq.push({distance[vertex],vertex});
            }
        }
    }
    cout<<"Shortest path is"<<endl;
    cout<<"vertex   distance"<<" predecessor"<<endl;
    for(i=0; i<n; i++){
        cout<<i<<"\t";
        cout<<distance[i]<<"\t";
        cout<<predecessor[i];
        cout<<endl;
    }
}