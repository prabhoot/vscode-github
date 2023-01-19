// 9. Write a structure to store the roll no., name, age (between 11 to 14) and address of students (more than 10). Store the information of the students. - Write a function to print the names of all the students having age 14. - Write another function to print the names of all the students having even roll no. - Write another function to display the details of the student whose roll no is given (i.e. roll no. entered by the user).// 9. Write a structure to store the roll no., name, age (een 11 to 14) and address of students (more than 10). Store the information of the students. - Write a function to print the names of all the students having age 14.
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
void print_even_rollno_name(student s){
    cout<<s.name<<endl;
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
       if(s[i].age==14){
         display(s[i]);}}
    cout<<"students with even roll no are:"<<endl;
    for(int i=0;i<no_of_students;i++){
        if(s[i].rollno%2==0){
            print_even_rollno_name(s[i]);
        }
    }
    return 0;
}