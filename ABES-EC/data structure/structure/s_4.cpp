// 9. Write a structure to store the roll no., name, age (een 11 to 14) and address of students (more than 10). Store the information of the students. - Write a function to print the names of all the students having age 14.
// input:-
// 1 Kanchan 14 Hapur
// 2 kavita 19 bijnor
#include <iostream>
#define no_of_students 2
using namespace std;
 struct student {
        int rollno;
        string name;
        int age;
        string address;
    };
void display(student s){
            cout<<"rollno = "<<s.rollno<<endl<<"name = "<<s.name<<endl<<"age = "<<s.age<<endl<<"address = "<<s.address<<endl;

}
int main(){
   cout<<"Kanchan's Code:\n";
    struct student s[no_of_students];
    for(int i=0;i<no_of_students;i++){
        cin>>s[i].rollno>>s[i].name;
        cin>>s[i].age;
        cin.ignore();
        getline(cin,s[i].address);
    }
    cout<<"the students with age 14 are:\n";
    for(int i=0;i<no_of_students;i++){
       if(s[i].age==14){ display(s[i]);}}
    
    return 0;
}