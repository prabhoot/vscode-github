//unary operator overload
#include <iostream>
using namespace std;
class num{
    int a;
    public:
        void setnum(int x){
            a=x;
        }
        void printnum(){
            cout<<a;
        }
        friend void operator-(num &);
};
void num::operator-(num &s){
    s.a=-a;
};
int main(){
    num s;
    s.setnum(10);
    s.printnum();
    -s;
    s.printnum();
    return 0;
}