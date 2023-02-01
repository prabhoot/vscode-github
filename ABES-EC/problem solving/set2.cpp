#include <functional>
#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int,greater<int>>s;
    s.insert(1);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(2);
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    auto it=s.find(2);
    set<int>::iterator t=s.find(2);
    for(t;t!=s.end();t++){
        cout<<*t<<" ";
    }
    cout<<endl;
    // s.erase(s.begin());
    s.erase(s.find(3));
    for(auto i=s.begin();i!=s.end();i++){
        cout<<*i<<" ";
    }
    return 0;
}