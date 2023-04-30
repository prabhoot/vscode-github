#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of processes";
    cin>>n;
    vector<int>at,bt,pid,ct,tat,wat,rt;
    vector<pair<int,pair<int,int>>>v;
    //           at       pid  bt
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        at.push_back(a);
        pid.push_back(b);
        bt.push_back(c);
        auto p=make_pair(b,c);
        auto q=make_pair(a,p);
        v.push_back(q);
    }
    sort(v.begin(),v.end());
    int current_time=at[0];

    for(int i=0;i<n;i++){
        auto a=v[i].first;
     auto b=v[i].second.first;
        auto c=v[i].second.second;
        rt.push_back(current_time-a);
        ct.push_back(current_time+c);
        current_time=max(ct[i],at[i+1]);
        tat.push_back(ct[i]-a);
        wat.push_back(tat[i]-c);
    }
    cout<<"Tabular form->\n";// Tabular form : 
    cout<<"at"<<setw(10)<<"pid"<<setw(10)<<"bt"<<setw(10)<<"ct"<<setw(10)<<"tat"<<setw(10)<<"wat"<<setw(10)<<"rt"<<endl;
    for(int i=0;i<n;i++){
     auto a=v[i].first;
     auto b=v[i].second.first;
     auto c=v[i].second.second;
     cout<<a<<setw(10)<<b<<setw(10)<<c<<setw(10)<<ct[i]<<setw(10)<<tat[i]<<setw(10)<<wat[i]<<setw(10)<<rt[i]<<endl;
    }
    cout<<"\n\n";
    cout<<"Gantt chart->\n";// Gantt chart :
    int x=10;
    cout<<"0"<<setw(x);
    for(int i=0;i<n;i++){
        cout<<""<<ct[i];
        if(i!=n-1){
         cout<<setw(x);
        }
    }
    cout<<endl;
    cout<<setw(6);
    for(int i=0;i<n;i++){
       if(i<n/2){ cout<<"P"<<v[i].second.first<<setw(x);}
else{        cout<<"P"<<v[i].second.first<<setw(x+2);
}    }
    cout<<endl;
    return 0;
}
// Input:
// 3
// 2 1 3
// 6 2 3
// 10 3 9