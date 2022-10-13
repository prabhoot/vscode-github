#include<iostream>
using namespace std;
int parameter(char S[32]){
    int flag=0;
    char s[32]{};
    if(s[0]=='_'||(s[0]>='A'&&s[0]<='Z')||(s[0]>='a'&&s[0]<='z'))
    {
        cout<<" d";
        int i=1;
        while(s[i]!='\0'){
            if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'||s[i]>='0'&&s[i]<='9'||s[i]>='_'&&s[i]<='$'){
                i++;
                cout<<"valid";
            }
            else{
                flag=1;
                cout<<"invalid";
                break;
            }
        }
    }
    return 0;
}
int main(){
    char abc[32];
cin>>abc;
    parameter(abc);
    return 0;
}