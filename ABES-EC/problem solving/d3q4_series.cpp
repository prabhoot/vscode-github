#include <iostream>
using namespace std;
int main(){
    double n;
    double x;
     double power{1};
     int sign{1};
    cin>>x>>n;
    
     double sum{1};
    int factorial{1};
    for(int i{1};i<n;i++){
        factorial*=i;
        power*=x;
    sum+=(power/factorial)*sign;
    sign*=-1;
    }
    cout<<sum;
    return 0;
} 