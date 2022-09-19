#include <iostream>
using namespace std;
int bin(int a[],int m,int low, int high,int search_key){
    int mid{};
while(low<=high){
    mid=(low+high)/2;
    if(a[mid]==search_key){
        return mid;
    }
    else if(search_key<a[mid]){
        high=mid-1;
    }
    else{
        low=mid+1;
    }
}
return -1;
}
int main(){
int m{6};
int search_key{7};
int a[]={3,5,7,8,9,10};
int low{0};
int high{5};
int mid{};
cout<<bin(a, m,low,high,search_key);
    return 0;
}