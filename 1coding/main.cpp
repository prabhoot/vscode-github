#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
	    cin>>n;
	    string v(n,0);
	       cin>>v;
	    vector<int> ans;
	    int temp=0;
	    int j=0;
	    for(int i=n-1;i>=0;i--){
	        temp+=pow(2*j,(v[i]));
	        if(v[i]=='1'){
	            ans.push_back(temp);
	        }
	        j++;
	    }
	    cout<<ans.size()<<endl;
	    for(auto i:ans){
	        cout<<i<<" ";
	    }
	}