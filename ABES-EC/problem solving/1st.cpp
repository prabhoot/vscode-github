#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    int temp=0;
    while(cin>>temp && cin.get()!='\n'){
        v.push_back(temp);
    }
    v.push_back(temp);
    int k=0;
    cin>>k;
    v.erase(remove(v.begin(), v.end(), 0), v.end());
    sort(v.rbegin(), v.rend());
    int i=0,j=v.size()-1;
    int count=0;
    while(i<=j){
        if(v[i]+v[j]<=k){
            j-=1;
        }
        i+=1;
        count+=1;
    }
    cout<<count;
}

