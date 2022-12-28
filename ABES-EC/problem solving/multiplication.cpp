#include <iostream>
using namespace std;

int multiply(int arr[], int n)
{
    int s1=0;int s2=0;
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    if(i<n/2){
        s1+=arr[i];}
   else{
    s2+=arr[i];
   }
   }
//    cout<<s1<<" "<<s2<<endl;
return s1*s2;
}
int main(){
   int arr[] = {1, 2, 3, 4};
   int n=4;
cout<<multiply(arr,n);
    return 0;
}