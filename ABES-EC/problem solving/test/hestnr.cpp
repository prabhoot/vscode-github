#include <cstdint>
#include <iostream>
#include <vector>
using namespace std;
void fun(vector<int>v){
    int ms=INT16_MIN;
    int cs=0;
    for(int i=0;i<v.size();i+=2){
        cs+=v[i];
        if(cs<0){
            cs=0;
        }
        ms=max(cs,ms);
    }
    int cs1=0;
    int ms1=INT16_MAX;
     for(int i=1;i<v.size();i+=2){
        cs1+=v[i];
        if(cs1>0){
            cs1=0;
        }
        ms1=min(cs1,ms1);
    }
    int x=ms-ms1;
    cout<<x*x*x*x;
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    fun(v);
    return 0;
}