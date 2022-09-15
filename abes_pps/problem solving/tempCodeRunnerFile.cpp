#include <iostream>
using namespace std;
int main(){
int n{4};int i{};

// for (int i=1;i<=n;i++){
// for(int j=1;j<=i;j++){
//     cout<<("  ");
// }

// for(int m{1};m<=2*(n-i)-1;m++){
//     cout<<"#"<<" ";
// }
// cout<<endl;
//     }

for (int i=1;i<=n;i++){
for(int j=1;j<=i;j++){
    cout<<("  ");
}

for(int m{1};m<=2*(n-i)-1;m++){
    cout<<"#"<<" ";
}
cout<<endl;
}
for(int k{1};k<=n-i;k++){
    cout<<"s";
    cout<<endl;
}

    

    return 0;
}
