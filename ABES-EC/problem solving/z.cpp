#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        float n;
        cin>>n;
        string s;
        cin>>s;
       int need=floor(n/2)+1;
        string ans="";
        for (auto i:s){
            if(i=='R')ans+"P";
            if(i=='P')ans+"S";
            if(i=='S')ans+"R";
        }
        cout<<ans<<endl;
        n-=need;
        //         for(auto &i:s){
        //    cout<<i<<" ";
        // }
        for(auto &i:s){
            if(n>0){
                if(i!='P'){
                    i='P';
                    n--;
                }
            }
        }
        // cout<<s<<endl;
    }
}
