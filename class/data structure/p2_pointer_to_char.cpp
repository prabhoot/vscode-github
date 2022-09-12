#include <iostream>
using namespace std;
int main(){
   char*p{};
   char variable{'A'};
   p=&variable;
   cout<<*p<<endl;
  const char *t{"hello world!!"};
cout <<t<<endl<<*t<<endl<<endl;

    return 0;
}