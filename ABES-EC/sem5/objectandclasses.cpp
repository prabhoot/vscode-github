#include <iostream>
using namespace std;
class student {
   int roll, age;
   public:
    // meathod,member function
    void getdata(int a, int b);
    void showdata();
};
void student ::getdata(int a, int b) {
    roll = a;
    age = b;
}
void student::showdata() {
    cout << "your roll No." << roll << endl;
    cout << "your age is " << age << endl;
}
int main() {
    student s;
    s.getdata(10, 20);
    s.showdata();
    return 0;
}