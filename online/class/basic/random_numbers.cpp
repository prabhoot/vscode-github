#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main (){
    int random_number;
    int min_value=1;
    int max_value=6;

    srand(time(nullptr));//or 0 instead of nullptr
int dice_1=(rand()%(max_value+min_value-1))+min_value;//dont use magic numbers
if (dice_1==0){
    dice_1=3;
}
cout <<dice_1<<endl;


  //  srand(time(0));//or 0 instead of nullptr
int dice_2=(rand()%6)+1;//dont use magic numbers
if (dice_2==0){
    dice_2=5;
}
    return 0;
}