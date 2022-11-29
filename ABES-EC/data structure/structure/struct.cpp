#include <iostream>
using namespace std;
struct student{
    int rollno;
    char section;
    float percentage;
    int mobno;
};
int main(){
    struct student s={9801,'B',84.4,9878};
    cout<<s.mobno<<" "<<s.percentage<<" "<<s.rollno<<" "<<s.section<<endl;
    return 0;
}