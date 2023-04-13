#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int maxArea(vector<int> &height) {
  int ans;
  int i = 0;
  int j = height.size()-1;
  int temp;
  while (i < j) {
    if (height[i] < height[j]) {
      temp = (j-i) * height[i];
      i++;
    } else {
      temp = (j-i) * height[j];
      j--;
    }
    ans=max(ans,temp);
  }
  return ans;
}
int main() { 
  vector<int>height = {1,8,6,2,5,4,8,3,7};
  cout<<maxArea(height);
  return 0; }