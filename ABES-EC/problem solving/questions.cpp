#include <iostream>
using namespace std;
int main(){
    int t=0;
    while(t--){
        int a;
        int b;
        cin>>a>>b;
        if(a>b){
            cout<<"first\n";
        }
        else if (a==b) {
        cout<<"any\n";
        }
        else {
        cout<<"second\n";
        }
    }
    return 0;
}