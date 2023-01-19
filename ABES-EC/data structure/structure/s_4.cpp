// 9. Write a structure to store the roll no., name, age (een 11 to 14) and address of students (more than 10). Store the information of the students. - Write a function to print the names of all the students having age 14.
#include <iostream>
#define no_of_students 1
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
   
    struct student s[no_of_students];
    for(int i=0;i<no_of_students;i++){
        cin>>s[i].rollno>>s[i].name;
        cout<<"enter age only between 11 and 14"<<endl;
        cin>>s[i].age;
        cin.ignore();
        getline(cin,s[i].address);
    }
    for(int i=0;i<no_of_students;i++){
        display(s[i]);}
    
    return 0;
}