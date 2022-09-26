#include <ios>
#include <iostream>
using namespace std;
int sum(int *a,int *b){
    return *a+*b;
}
int absoute_difference(int *a,int *b){
   
    return abs(*a-*b);
}
int main(){
    int a,b;
    cin>>a>>b;
cout<<sum(&a,&b)<<endl;
cout<<absoute_difference(&a,&b);
    return 0;
}