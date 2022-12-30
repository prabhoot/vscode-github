#include <iostream>
using namespace std;
int main() {
    int t=0;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int mx=max(a,max(b,c));
                if(a+b==mx){
                    cout<<"YES\n";
                }
                else if(b+c==mx){
                    cout<<"YES\n";
                }
                else if(a+c==mx){
                   cout<<"YES\n";   
                }
                else
                {cout<<"NO\n";}
        }
return 0;
    }