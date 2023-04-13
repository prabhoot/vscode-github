#include <iostream>
#include <vector>
using namespace std;
vector<int> solve(vector<int> a) {
    vector<int>b;
    vector<int>ans;
    int n=a.size();
    b.push_back(a[0]);
    for(int i=0;i<n-1;i++){
        int x=a[i]+a[i+1];
        a.push_back(x);
    }
    
}

int main(){

    return 0;
}