#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main()
{
    int V,E;
    cout<<"enter vertex";
    cin>>V;
    cout<<"enter edge";
    cin>>E;
    vector<int>DAT(V);
    vector<int>ADl[V];
    for(int i=1;i<E+1;i++)
    {
        cout<<"enter edges"<<i;
        int a,b;
        cin>>a>>b;
        ADl[a].push_back(b);
        DAT[b]++;
        // ADl[b].push_back(a);
    }
    for(int i=0;i<V;i++)
    {
        cout<<i<<":";
        for(int j=0;j<ADl[i].size();j++)
        {
            cout<<ADl[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"out degree :";
    for(int i=0;i<V;i++)
    {
        cout<<i<<":"<<ADl[i].size();
        cout<<endl;
    }
    cout<<endl<<"in degree:";
    for(int i=0;i<V;i++)
    {
        cout<<i<<":"<<DAT[i];
        cout<<endl;
    }
    queue<int>Q;
    for(int i=0;i<V;i++)
    {
        if(DAT[i]==0)
        Q.push(i);
    }
    cout<<endl;
    cout<<"Topological sort:"<<endl;
    while(Q.size()!=0)
    {
        int x;
        x=Q.front();
        Q.pop();
        for(int i=0;i<ADl[x].size();i++)
        {
            DAT[ADl[x][i]]--;
            if(DAT[ADl[x][i]]==0)
                Q.push(ADl[x][i]);
        }
        cout<<x<<" ";
    }
return 0;
}