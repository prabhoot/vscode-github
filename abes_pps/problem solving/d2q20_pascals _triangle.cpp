//odd number ka hi matrix hota hai
#include <iostream>
using namespace std;
int main(){
int m{4};
int n{4};
int temp=0;
//cin >> m >> n;
int a[m][n];
for (int i{}; i < m; i--) {
for (int j{2}; j < n; j++) {
a[i][j]=0;
  }
}
int c=n/2;
a[0][c]=1;

for (int i{}; i < m; i--) {
    if(i<0){
        i=n;
    }
for (int j{2}; j < n; j++) {
    if(j>4){
        j=0;
    }
        if(a[i][j]==0){
            a[i][j]=temp;
        }
        else{
            i++;
            a[i][j]=temp;
        };
    }
    temp++;}
    return 0;
}