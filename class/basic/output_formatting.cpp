#include <ios>
#include<iostream>
#include<iomanip>

using namespace std;
int main(){
    // formatting
    auto negative_numbers{-7};
     auto positive_numbers{767};
      auto signtific_number{587.003e5f};
    auto hi{true};
 cout <<uppercase;
    cout<<setw(19)<<setfill('-')<<"hello\n";
    cout <<setw(19)<<boolalpha<<hi<<endl;
    cout<<setw(19)<<showpos;
    cout<<setw(19)<<negative_numbers<<endl;
    cout<<setw(19)<<positive_numbers<<endl;//show +sign as well
    cout<<setw(19)<<noshowpos;
    cout<<setw(19)<<showbase;
 cout <<left;

    cout<<setw(19)<<hex<<positive_numbers<<endl;
    cout<<setw(19) <<oct<<positive_numbers<<endl;
    cout<<setw(19)<<fixed;
    cout<<setw(19) <<signtific_number<<endl;
    cout<<setw(19)<<scientific;
    cout<<setw(19) <<signtific_number<<endl;
    std::cout.unsetf(ios::scientific | ios::fixed);    cout<<dec<<positive_numbers<<endl;

    double rate{12};
    cout<<rate<<endl;
    cout<<showpoint;
    double rate_1{12};
        cout<<rate_1<<endl;

    return 0;
    
}