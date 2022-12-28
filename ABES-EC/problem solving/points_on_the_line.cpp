#include <algorithm>
#include <iostream>
using namespace std;
int main() {
  int t = 0;
  cin >> t;
  double max1=0;
  int min1= 0;
  int j=0;
  int arrx[5000]={0};
  int arry[5000]={0};
  int a=2;
  int x, y;
  while (t--) {
    cin >> x >> y;
    if(x==0){arry[j]=y;
    j++;
    cout<<"n";}
    if(y==0){arrx[j]=x;
    j++;
    cout<<"t";}
  }
  for(int i=0;i<j;i++){
    cout<<arrx[i]<<" ";
  }
  for(int i=0;i<j;i++){
    cout<<arry[i]<<" ";
  }
  return 0;
}