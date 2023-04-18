#include <iostream>
using namespace std;
int main(){
   int t{};
  cin>>t;
while(t--){
    float x=0;
    float y=0;
    float h=0;
    cin>>h>>x>>y;
    if(x<=y){
        cout<<"0\n";
    }
    else {
    cout<<"1\n";
    }
}
    return 0;
}