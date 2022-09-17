#include <iostream>
using namespace std;
void symdiffarray(int a[], int m, int b[], int n){
    int i=0;
    int j=0;
    int k=0;
    int c[22];
    while(i<m && j<n){
        if(a[i]<b[j]){
            c[k]= a[i];
            i++;
            k++;
        }
        else{
            if(b[j]<a[i]){
                c[k]=b[j];
                j++;
                k++;
            }
            else{
                i++;
                j++;
            }
        }
    }
    while(i<m){
        c[k]= a[i];
        i++;
        k++;
    }
    while(j<n){
        c[k]= b[j];
        j++;
        k++;
    }
    for(int i=0; i<k; i++){
        cout<<c[i]<<" ";
    }
}

int main()
{
    int a[10]= {1,3,5,7,9,12,15,20,30,40};
    int b[12]= {2,4,6,10, 12,15,18,20,25,30,50,90};
    symdiffarray(a,10,b,12);

 cout<<endl;
    return 0;
}