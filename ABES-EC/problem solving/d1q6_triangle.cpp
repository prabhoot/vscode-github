#include<iostream>
using namespace std;
int main(){
    int side_1{};
    int side_2{};
    int side_3{};
    cin>>side_1>>side_2>>side_3;
    if(side_1==side_2&&side_2==side_3){
        cout<<"equilatral triangle";
    }
    else if(side_1==side_2|side_3==side_1|side_2==side_3){
        cout<<"isosceles triangle";
    }
    else{
        cout<<"scalene triangle";
    }
    return 0;
}