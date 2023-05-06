// binary exponentation to find the a power b in log(n) time complexity.
// this code is only for understanding if a,b is INT_MAX then res*res will overflow so take everything in ll;
#include <bits/stdc++.h>
using namespace std;
int be(int a,int b){
    if(b==0){
        return 1;
    }
    int res=be(a,b/2);
    if(b&1){
        return a*res*res;
    }
    else{
        return res*res;
    }
}
int main(){
    int a=2,b=14;
    cout<<be(a,b)<<endl;
    cout<<pow(a,b);
    return 0;
} 