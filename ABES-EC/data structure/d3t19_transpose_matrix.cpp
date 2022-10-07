#include<iostream>
using namespace std;
int transpose(int a,int c){
    re
}
int main(){
    int r1,c1;
    cout<<"enter indices:";
    cin>>r1>>c1;
    int a[10][10]{};
    int c[10][10]{};
cout<<"enter elements:";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            c[i][j]=a[j][i];
        }
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<c[i][j];
        }
        cout<<endl;
    }
    return 0;
}