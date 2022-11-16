#include<iostream>
using namespace std;
void display(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}
void arrdeletion(int *a,int *n,int i){
    for(int j=i;j<=*n;j++){
        a[j]=a[j+1];
    }
}
void arrinsertion(int *a,int *n,int x,int i){
        *n=*n+1;
        // cout<<*n;
    int j{};
    for(j=*(n);j>=i;j--){
        a[j+1]=a[j];
        // cout<<"r";
    }
    a[i]=x;
}
void pqinsertion(int *a,int *n,int x){
    int i=0;
    while(i<*n&&x<a[i]){
        i++;
    }
    arrinsertion(a,n,x,i);
}
void pqdeletion(int *a,int *n){
        *n=*n-1;
    int x=a[*(n)];
    arrdeletion(a,n,*(n));
}
int main(){
    int a[100]={0};
    int n=0;
    pqinsertion(a,&n,1);
    pqinsertion(a,&n,2);
    pqinsertion(a,&n,6);
    pqinsertion(a,&n,4);
    pqinsertion(a,&n,0);
    display(a,n);
    cout<<endl;
         pqdeletion(a,&n);//0is deleted
    display(a,n);
    cout<<endl;
        pqdeletion(a,&n);//1is deleted
    display(a,n);

    return 0;
}