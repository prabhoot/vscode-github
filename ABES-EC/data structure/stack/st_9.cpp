// Program to Reverse the given String using Stack
#include "stack.h"
#include <string>
void rev_str(string str){
    initial();
    struct stack s;
    int i=0;
    int n=str.length();
    while(str[i]!='\0'){
        push(str[i]);
        i++;
    }
    for(int i=0;i<n;i++){
        str[i]=stacktop();
        pop();
    }
    cout<<str;
}
int main(){
    string str;
    cin>>str;
    rev_str(str);
    cout<<endl;
    return 0;
}