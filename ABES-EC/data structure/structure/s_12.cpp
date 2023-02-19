// 12. Write a structure to store the names, salary and hours of work per day of 10 employees in a company. Write a program to increase the salary depending on the number of hours of work per day as follows and then print the name of all the employees along with their final salaries. Hours of work per day 8 Increase in salary $50
// input:-
// Kanchan 500 8
// kiran 800  6
#include<iostream>
using namespace std;
#define no_of_employ 2
struct employees{
    string name;
    float salaries;
    int hours;
};
int main(){
    cout<<"Kanchan's Code:\n";
    struct employees e[no_of_employ];
    for(int i=0;i<no_of_employ;i++){
        cin>>e[i].name>>e[i].salaries>>e[i].hours;
    }
    for(int i=0;i<no_of_employ;i++){
        if(e[i].hours>=8){
            e[i].salaries+=50;
        }
        cout<<"name:"<<e[i].name<<" "<<e[i].salaries<<endl;
    }
return 0;
}