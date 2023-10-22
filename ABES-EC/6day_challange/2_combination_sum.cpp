#include <iostream>
#include <vector>
using namespace std;
void helper(vector<vector<int>> &ans, vector<int> &v, int n, int k, int start) {
  if (k == v.size()) {
    if (n == 0) {
      ans.push_back(v);
      return;
    }
  }
  for (int i = start; i <= 9; i++) {
    v.push_back(i);
    helper(ans, v, n - i, k, i + 1);
    v.pop_back();
  }
}
void combination_sum(int n, int k) {
  vector<vector<int>> a;
  vector<int> v;
  helper(a, v, n, k, 1);
}
int main() {
    combination_sum(3, 9);
}

// copy of leet code ans.

//   class Solution {
//     private:
//     void helper(vector<vector<int>> &ans, vector<int> &v, int n, int k,int start){
//     if(k==v.size()){
//         if(n==0){
//             ans.push_back(v);
//             return;
//         }
//     }
//     for(int i=start;i<=9;i++){
//         v.push_back(i);
//         helper(ans, v, n-i, k, i+1);
//         v.pop_back();
//     }
// }

// public:
//    vector<vector<int>> combinationSum3(int k, int n) {
// vector<int> ans2;
// vector<vector<int>> ans;
// helper (ans,ans2,n,k,1);
// return ans;
//     }
// };

