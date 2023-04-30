#include <bits/stdc++.h>
#include <stack>
using namespace std;
int main(){

    int t{};
    cin>>t;
    while(t--){
    int n;
    cin >>n;
    string s;
    cin>>s;
    int count=0;
    stack<char>st;
    for(int i:s){
        if(!st.empty()&&st.top()!=i){
            st.pop();
            count++;
        }
        
       else st.push(i);
    }
    if(count%2==0){
        cout<<"romos\n";
}
else{
    
    cout<<"zlatan\n";
}
    }
return 0;
}
