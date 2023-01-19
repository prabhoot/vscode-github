#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void rec(vector<int> &a, int &t, vector<int> &v, vector<vector<int>> &ans,
         int i) {

  if (t == 0) {
    ans.push_back(v);
    return;
  }

  if (t > 0) {
    t -= a[i];
    v.push_back(a[i]);
    rec(a, t, v, ans, i);
  } else {
    v.pop_back();
    rec(a, t, v, ans, i + 1);
  }
}
vector<vector<int>> combinationSum(vector<int> &a, int t) {
  vector<vector<int>> ans;
  vector<int> v;
  sort(a.begin(), a.end());
  rec(a, t, v, ans, 0);
  return ans;
}
int main() { return 0; }