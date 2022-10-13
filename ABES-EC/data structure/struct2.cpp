#include <iostream>
using namespace std;
struct student{
    int rollno;
    char section;
    float percentage;
    int mobno;
};
int main(){
    int n{};
    cin>>n;
    struct student s[n];
    for(int i=0;i<n;i++){
        cin>>s[i].mobno>>s[i].percentage>>s[i].rollno>>s[i].section;

    }
    for(int i=0;i<n;i++){
            cout<<s[i].mobno<<" "<<s[i].percentage<<" "<<s[i].rollno<<" "<<s[i].section<<endl;

    }
    return 0;
}