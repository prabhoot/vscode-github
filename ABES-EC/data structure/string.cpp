#include <iostream>
#include <cstdio>
#include <string>
#include <tuple>

using namespace std;

int main()
{
    string name;
    getline(cin,name);
    string name2;
    getline(cin,name2);
    int i{},j{};
   while(name[i]!='\0'){
    cout<<" s ";
    i++;
   }
   name.append(name2);
 cout<<name;
    return 0;
}