#include <iostream>
using namespace std;
int main (){
    int fahrenheit;
    cin >> fahrenheit;

    double celsius=0;
    celsius =( fahrenheit-32) /1.8;
    cout << celsius;
    return 0;
}