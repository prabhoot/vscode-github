// https://www.codechef.com/DSAPREP_01/problems/FNDINT?tab=statement
#include <iostream>
using namespace std;
bool check_unique(int n) {
  int seen[10] = {0};
  while (n) {
    int digit = n % 10;
    n = n / 10;
    if (seen[digit]++) {
      return 0;
    }
  }
  return 1;
}
int main() {
  int t = 0;
  cin>>t;
  while (t--) {
    int n=0;
    cin >> n;
    n++;
    while(1){
        if(check_unique(n)){
            cout<<n<<endl;
            break;
        }
        n++;   
    }
  }
}