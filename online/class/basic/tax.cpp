#include <iostream>
using namespace std;
int main(){
    double sales = 95000;
    double state_tax=0;
    double county_tax=0;
    double total_tax=0;
    state_tax = 0.04*sales ;
    county_tax = 0.02*sales ;
    total_tax=state_tax+county_tax;
    cout << state_tax<<endl<<county_tax<<endl<<total_tax;
    return 0;
}