#include <iostream>
using namespace std;
int main(){
    int a[]{43,4,23,21,3,32};
    cout <<sizeof(a)/sizeof(a[0]);
    return 0;
}