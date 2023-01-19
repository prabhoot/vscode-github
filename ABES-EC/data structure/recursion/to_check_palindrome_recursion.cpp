#include <iostream>
using namespace std;
    bool helper(string str,int n,int i){
        if(i>=n/2){
            return 1;
        }
        if(str[i]==str[n-i-1]){
            helper(str, n, i-1);
        }
        else {
        return false;
        }
        return true;
    }
bool pali(string str){
    int n=str.size();
   return helper(str, n, 0);
}
int main(){
   cout<< pali("helleh");
    return 0;
}