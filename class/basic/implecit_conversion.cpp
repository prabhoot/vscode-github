//oprations are only for data type above, and 4 ie int
#include<iostream>
using namespace std;
int main(){
    short int var1{10};//size 2
    short int var2{20};
    char var3{65};
    char var4{97};//size 1
    auto var6= var1+var2;
    auto var5=var3+var4;//conversion to int
    cout<<sizeof(var6)<<endl;
    cout<<sizeof(var5)<<endl;
    return 0;
}