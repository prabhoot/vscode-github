// 10. Write a structure to store the name, account number and balance of customers (more than 10) and store their information. 1 - Write a function to print the names of all the customers having balance less than $200. 2 - Write a function to add $100 in the balance of all the customers having more than $1000 in their balance and then print the incremented value of their balance.
// input:-
// suchita 67801 200
// Kanchan 67802 300
// mohini 67803 150
#include <iostream>
#define no_of_account 3//no.of accounts in the bank.
using namespace std;
struct bank{
    string name;
    long account_no;
    float balance;
};
void display(bank b[no_of_account]){
    int flag{};
    cout<<"the names of customers having bank balance less than $200 are:"<<endl;
     for(int i=0;i<no_of_account;i++){
        if(b[i].balance<200){
            flag ++;
            cout<<"name : "<<b[i].name<<" balance : $"<<b[i].balance<<endl;
        }
    }
    if(flag==0){
        cout<<"nil"<<endl;
    }
}
void increment(bank b[no_of_account]){
    cout<<"the names of customers having bank balance more than $1000 are:"<<endl;
    for(int i=0;i<no_of_account;i++){
        if(b[i].balance>1000){
            cout<<"name : "<<b[i].name<<" balance : $"<<b[i].balance+100<<endl;
        }
    }
}
int main(){
    cout<<"Kanchan's Code:\n";
    struct bank b[no_of_account];
    for(int i=0;i<no_of_account;i++){
        cin>>b[i].name>>b[i].account_no>>b[i].balance;
    }  
     display(b);
     increment(b);
    return 0;
}