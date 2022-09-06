#include<iostream>
using namespace std;
int main (){
    int Temp{};
    cin>>Temp;
    if(Temp <0){
        cout <<"Freezing weather";
    }
    if(Temp>=0&&Temp<10){
                cout <<"Very Cold weather";
    }
    if(Temp>10&&Temp<20){
                cout <<"Cold weather";
    }
    if(Temp>20&&Temp<30){
                cout <<"Normal in Temp";
    }
    if(Temp>30&&Temp<40){
                cout <<"Its Hot";
    }
    if(Temp>=40){
                cout <<"Its Very Hot";
    }
    return 0;
}