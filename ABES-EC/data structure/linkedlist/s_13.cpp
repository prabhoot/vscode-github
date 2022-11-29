// 13. Let us work on the menu of a library. Create a structure containing book information like accession number, name of author, book title and flag to know whether book is issued or not. Create a menu in which the following can be done.
#include <iostream>
using namespace std;
#define no_of_books 1
struct book{
    int accession_no;
    string author;
    string title;
    int issue_status=0;
};
void display(book b){
    cout<<"accession number: "<<b.accession_no<<endl<<"author name: "<<b.author<<endl<<"book title"<<b.title;
    if(b.issue_status>0){
        cout<<b.issue_status<<"are book available";
    }
    else{
        cout<<"book not available";
    }
}
int main(){
    struct book b[no_of_books];
    // for(int i=0;i<no_of_books;i++){
    //     cin>>b[i].accession_no;
    //     getline(cin,b[i].author);
    //     getline(cin,b[i].title);
    //     cin>>b[i].issue_status;
    // }
    cout<<"welcome to the library\n what do you want to do?"<<endl;
    cout<<"the following operations can be done:\n type s serching\n type e to to exit\n";
    char cheak;
    cin>>cheak;
    if(cheak=='s'){
        cout<<"you can search through by:\n type  i  if you want to search using accession number.\ntype  a  if you want to search using author name\n type  t  if you want to search using book title"<<endl;
        char variable;
        cin>>variable;
        if(variable=='i'){
            char variable_i;
            cin>>variable_i;
            for(int i=0;i<no_of_books;i++){
               if (variable_i==b[i].accession_no){
                cout<<"your result is found :-)\n";
                display(b[i]);
               }
            }
        }    
    }    
   return 0;
}