#include <iostream>
using namespace std;
int main(){
    int num=3534;
    int sum=0;
     while(num!=0){
            int a=num%10;
            sum+=a;
            num=num/10;
        }
        cout<<sum;
    return 0;   
}