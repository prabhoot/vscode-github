#include <bits/stdc++.h>
using namespace std;
int main() {
    cout << "Enter the input:\n";
    string str;
    string temp;
    while (temp != "~") {
        getline(cin, temp);
        str = str + "`" + temp;
    }
    cout<<str<<endl;
    int n = str.size();
    auto i = str.begin();
    auto j = str.begin() + 1;
    for (; i != str.end(); i += 1, j += 1) {
        auto a = *i;
        auto b = *j;
        auto index = j;
        if (a == '/' && b == '/') {
            while (*index != '`') {
                index += 1;
            }
            str.erase(i, ++index);
        }
        if(a=='/'&&b=='*'){
            index++;
            while(*index!='*'){
                index+=1;
            }
            index+=2;
            str.erase(--i,index);
        }
    }
    cout<<str<<endl;
    cout<<"Upon comment removal:";
    for (auto i : str) {
        if (i == '`') {
            cout << endl;
        } else if (i!='~') {
            cout << i;
        }
    }
    return 0;
}














// *******************single line input*********************************

// arst
// //tdds
// pghg

// *******************multi line input*********************************

// ar
// /*srt*/
// rst
