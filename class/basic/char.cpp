#include <iostream>
using namespace std;
int main (){
    char variable {'A'};
    cout <<variable<<endl;
    auto number{43.9l};
    cout <<sizeof(number)<<endl;
    cout <<static_cast<int>(variable);
    return 0;
}
    
    