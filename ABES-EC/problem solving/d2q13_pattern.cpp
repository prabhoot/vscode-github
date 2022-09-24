#include <iostream>
using namespace std;
int pattern(int n){
if(n>=0){n-=5;
cout<<n<<" ";
pattern(n);}
else
{return 0;}
return 0;
}

int pattern2(int n,int temp){
    cout<<n;
    int c=0;
if(n<temp){n+=5;
cout<<n<<" ";
pattern2(n,temp);}
else
{return 0;}
return 0;
}
int main(){
    int global=2;
    int n{16};
    int temp=16;
    // cin>>n;
pattern(n);
pattern2(n,temp);
    return 0;
}