#include <iostream>
using namespace std;
int main(){
   int n{};
  cin>>n;
  int a[n];
    int low_bound{};
    int upper_bound{n-1};
    int byte_size{sizeof(a[n]/a[0])};
    int i{};
    cin>>i;
    cout<<&a[i]<<endl;
cout<<(a+(i-low_bound))<<endl;
    return 0;
}