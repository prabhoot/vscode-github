#include <bits/stdc++.h>
using namespace std;
int power(int a,int b){
    if(b==0){
        return 1;
    }
    else{
        return a*power(a,--b);
    }
    return 0;
}
int main(){
    int a=2;
    int b=5;
    cout<<power(a,b)<<endl;
    return 0;
}