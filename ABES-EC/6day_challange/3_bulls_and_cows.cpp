#include <iostream>
#include <map>
#include <string>
#include <utility>
using namespace std;
string getHint(string s, string g) {
    map<int,pair<int, int>>map;
    int sum{0};
    int i=0;
    int cow{0};
        while(s!="\0"){
            if(s[i]!=g[i]){
                map[s[i]].first++;
                map[g[i]].second++;
            }
            else {
            cow++;
            }
        }
        string str;
        str.append(to_string(cow));
        str.append("A");
        int mini{0};
        for(int i=0;i<10;i++){
            mini+=min(map[i].first,map[i].second);
        }
        str.append(to_string(mini));
        str.append("B");
        return str;
    }
int main(){

    return 0;
}