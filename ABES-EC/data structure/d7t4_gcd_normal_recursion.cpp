#include <iostream>
using namespace std;
int gcd(int a,int b){
    if(a==b){
        return a;
    }
    else if(a>b){
        return gcd(a-b,b);
    }
    else{
        return gcd(a,b-a);
    }
return 0;
}
int main() {
  int a{};
  int b{};
  cin >> a >> b;
cout<<gcd(a,b);
  return 0;
}