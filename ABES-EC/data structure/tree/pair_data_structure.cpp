#include <iostream>
#include <utility>
#include <vector>
using namespace std;
int main(){
vector<pair<int  , int>>p;
    p.push_back(make_pair(1, 12));
    p.push_back(make_pair(2, 13));
    p.push_back(make_pair(3, 14));
    p.push_back(make_pair(4, 15));
    // for(auto i:p){
    //     cout<<i;
    // }
    for(int i=0;i<p.size();i++){
        cout<<p[i].first<<" ";
        cout<<p[i].second<<endl;
    }
    for(auto i:p){
        cout<<i.first<<" ";
        cout<<i.second<<endl;
    }
    return 0;
}