#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int  basic_salary{};
    char grade{};
    cin>>basic_salary>>grade;
    auto hra{0.2*basic_salary};
    auto da{0.5*basic_salary};
    auto pf{0.11*basic_salary};
    int allowance{};
    double total_salary{};
    if(grade==65){
        allowance = 1700;
    }
    else if(grade==66){
        allowance = 1500;
    }
    else{
        allowance = 1300;
    }
    total_salary=basic_salary+hra+allowance-pf;
   cout<< (total_salary=round(total_salary));
return 0;
}