#include <iostream>
using namespace std;
int bin(int a[],int low, int high,int search_key){
    int mid{};
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

return -1;
}
int main(){
int search_key{7};
int n{6};
cin>>n;
int a[]={3,5,7,8,9,10};
int low{0};
int high{n-1};
int mid{};
cout<<bin(a,low,high,search_key);
    return 0;
}
