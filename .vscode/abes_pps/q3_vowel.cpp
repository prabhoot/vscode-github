#include<iostream>
using namespace std;
int main(){
    char input_char{};
    cin>>input_char;
    //ascii valles
    if(input_char==65|input_char==69|input_char==73|input_char==79|input_char==85|input_char==97|input_char==101|input_char==105|input_char==111|input_char==117){
        cout <<"vowel";
    }
    else{
        cout<<"consonent";
    }
    return 0;
}