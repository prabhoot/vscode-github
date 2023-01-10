// #include <iostream>
// using namespace std;
// int main() {
//   int t;
//   cin >> t;
//   while (t--) {
//     int n;
//     cin >> n;
//     int dat[n + 2];
//     for (int i = 0; i <= n + 1; i++) {
//       dat[i] = 0;
//     }
//     for (int i = 0; i < n; i++) {
//       int x;
//       cin >> x;
//       dat[x]++;
//     }
//     int count = 0;
//     for (int i = 1; i <= n + 1; i++) {
//       if (dat[i] > 0) {
//         count++;
//       }
//     }
//     cout << count << endl;
//   }
//   return 0;
// }

#include <iostream>
#include <map>
using namespace std;
int main(){
    int t;
    cin>>t;
    map<int, int>map;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            map[x]++;
        }
        cout<<map.size()<<endl;
        map.clear();
    }
    return 0;
}