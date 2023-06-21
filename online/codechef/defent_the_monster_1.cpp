#include <bits/stdc++.h>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        long long int a=0;
        cin>>a;
        long long int sum=0, current=0;
       for(long long int i=1;i<a;i++){
           if(i%15==0){
               sum+=i;
               continue;
           }
            else if(i%3==0){
               sum+=i;
               continue;
            }
           else if(i%5==0){
           sum+=i;
           }
       }
        cout<<sum<<endl;
    }
    return 0;
}