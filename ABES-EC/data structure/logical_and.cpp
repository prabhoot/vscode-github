#include <iostream>
using namespace std;
int main(){
    int n{2};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<i<<" "<<j<<" "<<(i&&j);
           
        cout<<endl;
        }
    }
cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
             cout<<i<<" "<<j<<" "<<(i||j);
           
        cout<<endl;
        }
    }
    return 0;
}