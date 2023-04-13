#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(33);
    s.insert(4);
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<s.count(1);
    return 0;
}