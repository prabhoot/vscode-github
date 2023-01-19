// 7. Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.
#include <iostream>
using namespace std;
#define no_of_students 1
struct marks{
    int roll;
    string name;
    float chem_marks;
    float maths_marks;
    float phy_marks;
};
int main(){
    struct marks s[no_of_students];
    for(int i=0;i<no_of_students;i++){
        cin>>s[i].roll>>s[i].name>>s[i].chem_marks>>s[i].maths_marks>>s[i].phy_marks;
    }
    for(int i=0;i<no_of_students;i++){
        int total=((s[i].chem_marks+s[i].maths_marks+s[i].phy_marks)*100)/300;
        cout<<"student "<<i+1<<" : "<<s[i].name<<" ==> percentage : "<<total<<"%";
    }
    return 0;
}