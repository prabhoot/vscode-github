#include <iostream>
using namespace std;
bool restaccsort(int *arr, int n) {
    if(n==1){
        return true;
    }
    return (arr[0]<arr[1]&&restaccsort(&arr[n-1], n-1));
}
int main(){
    int arr[5]={1,2,4,50,6};
    cout<<restaccsort(arr, 5);
    return 0;
}