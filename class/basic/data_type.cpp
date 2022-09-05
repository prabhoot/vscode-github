#include <iostream>
using namespace std;
int main(){
    
    //advanced
    auto number =0;
    auto interest_rate=894.3f;//without f it is double
    auto prize=834.4;
    auto file_size=500L;//without L it is int
    auto letter='a';
    auto is_valid=true;

//brace initializer- prevents us from assigning wrong values
//by default initialize to 0

    int rate=9.3;//wrong value tooint data type
    int value {};
    int cost {9};
    cout <<rate<<endl<<value<<endl<<cost<<endl;
    return 0;
}