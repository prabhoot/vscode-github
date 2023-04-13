#include <iostream>
#include <type_traits>
using namespace std;
int main(){
    string str="abcde";
    int n=str.length();
    for (int i=0,j=n-1;i<j;i++,j--){
        swap(str[i],str[j]);
    }
    cout<<str<<endl;
    return 0;
}