#include <iostream>
using namespace std;
    int count{};
int total_digits(long n){
    int count{};
   while(n){
    n=n/10;
    count++;
   }
return count;
}
int digit(long n){
    if(n==0){return 0;}
    n=n%10;
return n;
}
int stepping(long n){
    if(n==0){
        return 0;
    }
    if((digit(n)==digit(n/10)||(digit(n)==digit(n/10)+1))||(digit(n)==digit(n/10)-1)){
        count++;
       stepping(n/10);
    }
    else{
        return -1;
    }
    return 1;
}
int main(){
    int flag{};
long n,m;
cin>>n>>m;
for(int i=n;i<=m;i++){
    if(stepping(i)){
        flag++;
    }
}
cout<<flag;
    return 0;
}