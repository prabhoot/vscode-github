#include<iostream>
using namespace std;
void display(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}
void exchange(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int pqdeletion(int *a,int *n){
    int x=a[0];
    *n=*n-1;
    a[0]=a[*(n)];
    int p=0;
    while(1){
    int l=p*2+1;
    int min=l;
    int r=p*2+2;
    if(r<=*n&&r<l){
        min=r;
    }
    if(a[p]>a[min]){
        exchange(&a[p],&a[min]);
        p=min;
    }
    else{
    break;
    }}
    return x;
}
void pqinsertion(int *a,int *n,int data){
    int p{};
    a[*n]=data;
    int i=*n;
    while(i>0&&a[p]>a[i]){
    int p=(i-1)/2;
        exchange(&a[p],&a[i]);
        i=p;
    }
    *n=*n+1;
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