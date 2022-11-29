#include <iostream>
using namespace std;
int merge(int a[],int low,int mid,int high){
   int c[100]{};
    int i=low;
    int j=mid+1;
    int k=low;
    while(i<=mid&&j<=high){
        if(a[i]<a[j]){
        c[k]=a[j];
        i++;
        j++;
        }
        else{
            c[k]=a[j];
            j++;
            k++;
        }
    }
while(i<=mid){
    c[k]=a[i];
}
}
int merge_sort(int a[],int low,int high){
    int mid=(low+high/2);
    merge_sort(a, low, mid);
    merge_sort(a, mid+1,high);
    merge(a,low,mid,high);
return 0;
}
int main(){
#include <iostream>
using namespace std;
int main(){
   int m{};
  cin>m;
  int b[m];
for(int i{};i<m;i++){
 cin>>b[i];
}
    #include <iostream>
    using namespace std;
    int main(){
        
       int n{};
      cin>>n;
      int a[n];
    for(int i{};i<n;i++){
     cin>>a[i];
    }
        
        return 0;
    }
    return 0;
}
    merge_sort(a, low, high)
    return 0;
}