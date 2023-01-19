// Write a program to store and print the roll no., name, age and marks of a student using structures. Write a program to store the roll no. (starting from 1), name and age of 5 students and then print the details of the student with roll no. 1.
#include <iostream>
#include <string>
#define no_of_students 5
#define no_of_subjects 6
using namespace std;
int main(){
    struct student{
        int rollno;
        string name;
        int  age;
        float marks[6];
    };
    struct student s[no_of_students];
    for(int i=0;i<no_of_students;i++){
        cin>>s[i].rollno>>s[i].name>>s[i].age;
        for(int j=0;j<no_of_subjects;j++){
            cin>>s[i].marks[j];
        }
        if(i!=no_of_students-1){cout<<"next student";}
    }
    cout<<"enter rollno of student for which you want details";
    int n;
    cin>>n;
    for(int i=n-1;i<no_of_students;i++){
        cout<<"rollno = "<<s[i].rollno<<endl<<"name = "<<s[i].name<<endl<<"age = "<<s[i].age<<endl;
        for(int j=0;j<no_of_subjects;j++){
            cout<<s[i].marks[j]<<", ";
        }
        cout<<endl;
        break;
    }
    return 0;
}