#include<iostream>
using namespace std;
int main(){
    int number_1{};
    int number_2{};
    int number_3{};
    int largest_number{};
    cin>>number_1>>number_2>>number_3;
    if(number_1>number_2&&number_1>number_3){
        largest_number=number_1;
        cout<<largest_number;
    }
    if(number_2>number_1&&number_2>number_3){
        largest_number=number_2;
        cout<<largest_number;
    }
    if(number_3>number_1&&number_3>number_2){
        largest_number=number_3;
        cout<<largest_number;
    }
    return 0;
}