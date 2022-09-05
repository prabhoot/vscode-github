#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double number{22};
    double number_1{7};
    long double number_3=number/number_1;
     cout <<setprecision(3);
     long double  a{3.142e2};
     cout << a<<endl;
        cout <<number_3<<endl;
    return 0;
}