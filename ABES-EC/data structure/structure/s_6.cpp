// 6. Write a program to add two time in hour, minute and second using structure. The values of the time is to be taken from the user.
// input:-
// 1 23 45
// 6 7 9
#include <iostream>
using namespace std;
#define n 2
struct time{
    int hour;
    int minute;
    int second;
};
int main(){
    cout<<"Kanchan's Code:\n";
struct time t[3];
cout<<"enter time in the form of hour min sec:"<<endl;
for(int i=0;i<n;i++){
    cin>>t[i].hour>>t[i].minute>>t[i].second;
}
t[2].second=t[0].second+t[1].second;
t[2].second=t[2].second%60;
t[2].minute=t[2].second/60;

t[2].minute=t[0].minute+t[1].minute;
t[2].minute=t[2].minute%60;
t[2].hour=t[2].minute/60;

t[2].hour=t[0].hour+t[1].hour;
cout<<t[2].hour<<" hours : "<<t[2].minute<<" minutes : "<<t[2].second<<" seconds\n";
    return 0;
}