#include<iostream>
using namespace std;
int leap_year(int input_year){
    int temp;
    for(int i=0;i<input_year;i++)
      {
         if((input_year%4==0&&(input_year%100|input_year%400))){
            temp++;
     }

}
return(temp);
}
int main(){
    int day{1};
     int month{1};
     int year{1};
     cin>>day>>month>>year;

    return 0;
}