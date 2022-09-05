#include <iostream>
using namespace std;
int main(){
    int a=0,c=0,m=0;
    cin>>a;
        cin.ignore();

    char arr[a+1];
    cin.getline(arr,a);
    cin.ignore();
    int i=0;
    while(1){
        
        if((arr[i]=' ')||(arr[i]=='\0')){
            m=max(m,c);
            c=0;
        }
        else
            c++;
     
         if(arr[i]=='\0')
            break;
             i++;
          
    }
    cout<<m<<endl;
    
    
    return 0;
}