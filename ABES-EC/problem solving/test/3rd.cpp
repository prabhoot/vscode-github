// College on Hills
#include <iostream>
#include <vector>
using namespace std;
int helper(vector<int>v) {
  int ans = 0;
  int n=v.size();
  for (int i = 1; i < n - 1; i++) {
    int left = v[i];
    for (int j = 0; j < i; j++)
      left = max(left, v[j]);
    int right = v[i];
    for (int j = i + 1; j < n; j++)
      right = max(right, v[j]);
    ans = ans + (min(left, right) - v[i]);
  }
  return ans;
}
int main() { 
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
        cout<<helper(v);
    return 0; }
