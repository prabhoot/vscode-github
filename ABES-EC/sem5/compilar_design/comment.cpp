#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the input:\n";
    string str;
    getline(cin,str);
    int n=str.size();
    if(str[0]=='/'&&str[1]=='/'){
        cout<<"It is a single line comment\n";
    }
    else if(str[0]=='/'&&str[1]=='*'){
        if(str[n-1]=='/'&& str[n-2]=='*'){
            cout<<"It is a multi-line  comment\n";
        }
        else{cout<<"can't find ending symbol \n";}
    }
    else{cout<<"It is not a comment\n";}
    return 0;
}