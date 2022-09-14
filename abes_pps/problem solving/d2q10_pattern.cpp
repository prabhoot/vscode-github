#include <iostream>
using namespace std;
int main(){
    int n{4};
   // cin>>n;
    for (int i=1;i<=n;i++){
for(int j=1;j<=i;j++){
    cout<<("  ");
}

for(int m{1};m<=2*(n-i)-1;m++){
    cout<<"#"<<" ";
}
cout<<endl;
    }
for (int i=1;i<=n;i++){
       
for(int j=2;j<=n-i+1;j++){
    cout<<("  ");
    }
    for(int h{};h<=2*(i);h++){
        cout<<"5"<<" ";
    }
    cout<<endl;
}
    return 0;
}