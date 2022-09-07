#include<iostream>
using namespace std;
int main(){
    bool red{},yellow{1},green{},police_cheak{};
    if (red){
        cout<<"stop!!";
    }
    if (yellow) {
        if(police_cheak){
            cout<<"stop!!";
        }
    else {cout<<"slow dnown";
    }
    }
    if(green){
        if(police_cheak){
            cout<<"stop!!";
    }
    else {cout<<"go";}
    } 
    return 0;
    
}