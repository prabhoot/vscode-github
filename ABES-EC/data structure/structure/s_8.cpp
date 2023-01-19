// 8. Write a program to add, subtract and multiply two complex numbers using structures to function.
#include <iostream>
using namespace std;
struct complex{
    float real;
    float imaginary;
};
void add(complex c0,complex c1){
   c0.real+=c1.real;
    c0.imaginary+=c1.imaginary;
    cout<<"addition:\n"<<c0.real<<" "<<c0.imaginary<<endl;
}
void sub(complex c0,complex c1){
   c0.real-=c1.real;
    c0.imaginary-=c1.imaginary;
    cout<<"substraction:\n"<<c0.real<<" "<<c0.imaginary<<endl;
}
void mul(complex c0,complex c1){
   c0.real*=c1.real;
    c0.imaginary*=c1.imaginary;
    cout<<"multiplication:\n"<<c0.real<<" "<<c0.imaginary<<endl;
}

int main(){
struct complex c[2];
    for(int i=0;i<2;i++){
        cin>>c[i].real>>c[i].imaginary;
    }
add(c[0],c[1]);
sub(c[0],c[1]);
mul(c[0],c[1]);
    return 0;
}