// #include <iostream>
// #include<boost/multiprecision/cpp_int.hpp>
// using namespace boost::multiprecision;
// using namespace std;
// int main(){
//    int t{};
//   cin>>t;
// while(t--){
//     int1024_t n;
//     cin>>n;
//     cout<<n%20<<endl;
// }
//     return 0;
// }

#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>
#include <string>
using namespace boost::multiprecision;
using namespace std;
int main() {
  int t{};
  cin >> t;
  while (t--) {
    string s{};
    cin >> s;
    if (s.size() < 2) {
      cout << s << endl;
    } else {
      s = s.substr(s.size() - 2);
      int n = stoi(s);
      cout << n % 20<<endl;
    }
  }
  return 0;
}