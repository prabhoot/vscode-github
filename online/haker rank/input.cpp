#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    int var1 {};
    long var2 {};
    char var3 {};
    float var4 {5.3};
    double var5 {};
cin>>var1>>var2>>var3>>var4>>var5;
cout<<var1<<endl<<var2 <<endl<<var3<<endl;
cout<<fixed<<setprecision(3)<<var4<<endl;
cout<<setprecision(9)<<var5;
return 0;
}