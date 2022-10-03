#include <iostream>
using namespace std;
int main(){
    int temp{};
    int n=121;
    for(int i=0;i;i++){temp+=(temp*10 +(n%10));}
        cout<<temp;
    return 0;
}