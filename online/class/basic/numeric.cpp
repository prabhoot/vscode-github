#include <iostream>
#include <limits>
using namespace std;
int main (){
    cout << numeric_limits<int>::min()<<endl<<numeric_limits<int>::max()<<endl;
    cout <<endl<<numeric_limits<short>::max()<<endl;
    cout<<numeric_limits<long double>::max();
    return 0;
}