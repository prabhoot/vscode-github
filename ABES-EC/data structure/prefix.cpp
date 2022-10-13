#include <iostream>
using namespace std;
#define uppercase 56
#define lowercase 26
int main(){
    string name{};
    getline(cin,name);
    int dat[lowercase]{};
   int size= name.size();
for(int i=0;i<size;i++){
        dat[int(name[i])-'a']++;      
}
for(int i=0;i<lowercase;i++){
    if(dat[i]>0){
        cout<<char('a'+i)<<" "<<(dat[i])<<endl;
        }
}
    return 0;
}