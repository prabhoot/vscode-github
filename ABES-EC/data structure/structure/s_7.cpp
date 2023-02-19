// 7. Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.
// input:-
// 1 Kanchan 19 91 91 
// 2 rina 19 95 97
// 3 babita 19 95 91 
// 4 anushka 19 95 89 
// 5 deepali 19 95 91 
#include <iostream>
using namespace std;
#define no_of_students 5
struct marks{
    int roll;
    string name;
    float chem_marks;
    float maths_marks;
    float phy_marks;
};
int main(){
    cout<<"Kanchan's Code:\n";
    struct marks s[no_of_students];
    for(int i=0;i<no_of_students;i++){
        cin>>s[i].roll>>s[i].name>>s[i].chem_marks>>s[i].maths_marks>>s[i].phy_marks;
    }
    for(int i=0;i<no_of_students;i++){
        int total=((s[i].chem_marks+s[i].maths_marks+s[i].phy_marks)*100)/300;
        cout<<"student "<<i+1<<" : "<<s[i].name<<" ==> percentage : "<<total<<"%\n";
    }
    return 0;
}