#include <iostream>
using namespace std;
long strangeGrid(long a, long b) {
    long d=10;
    long z=(b-1)*2;
    if (a%2==0) {
    long i=1;
    long n=a/2;
        long y=i+(n-1)*d;
        cout<<y<<endl;
        long result=y+z;
return result;
    }
    else {
    long i=0;
    long n=(a+1)/2;
    long y=i+(n-1)*d;
    long result=y+z;
return result;
    }
    return 0;
}
int main(){
   cout<<strangeGrid(1000000011, 5);  
    return 0;
}