#include<iostream>
using namespace std;
int main(){
    int input_year{};
    cin>>input_year;
    if((input_year%4==0&&(input_year%100|input_year%400))){
        cout<<"leap year";
    }
    else{
        cout<<"not a leap year";
    }
    return 0;
}