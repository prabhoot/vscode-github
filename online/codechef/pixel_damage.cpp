#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int h,w,x,y,k;
	    cin>>h>>w>>x>>y>>k;
	    if(sqrt(pow(w-x,2)+pow(h-y,2))<k){
	        cout<<1<<endl;
	    }else{
	        cout<<0<<endl;
	    } 
	}
	return 0;
}