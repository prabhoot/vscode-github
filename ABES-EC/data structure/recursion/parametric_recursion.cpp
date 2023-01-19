#include <iostream>
using namespace std;
void fun(int n,int sum){
    if(n==0){
        cout<<sum;
        return ;
    }
    sum+=n;
    fun(--n,sum);
}
int main(){
fun(3, 0);
    return 0;
}