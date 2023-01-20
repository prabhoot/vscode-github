#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
  map<int, string> map;
  map[0] = "prabhoot";
  map[1] = "kanchan";
 for(int i=0;i<map.size();i++){
    cout<<string(map[i])<<" ";
 }
 cout<<map["prabhoot"];
  return 0;
}