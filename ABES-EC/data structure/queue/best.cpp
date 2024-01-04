#include <bits/stdc++.h>
using namespace std;
deque<int> q;
vector<int> v;
void my(string str) {
    int n = str.length();
    if (str.find("PUSH") != -1) {
        str.erase(0, 4);
        q.push_back(stoi(str));
    } else if (str.find("INJECT") != -1) {
        str.erase(0, 6);
        q.push_front(stoi(str));
    } else if (str.find("EJECT") != -1) {
        if (!q.empty()) {
            q.pop_front();
        }
    } else if (str.find("POP") != -1) {
        if (!q.empty()) {
            v.push_back(q.back());
            q.pop_back();
        }
        else {cout<<"EMPTY";}
    } else {
        if (q.empty()) {
            cout << "EMPTY";
        }
        for (auto i : v) {
            cout << i << " ";
        }
    }
    return;
}
int main() {
    string str;
    do {
        getline(cin, str);
        my(str);
    } while (str != "SHOW");
    return 0;
}

// PUSH 3
// PUSH 11
// POP
// INJECT 8
// EJECT
// PUSH 9
// SHOW

// INJECT 1
// EJECT
// POP
// INJECT 65
// PUSH 23458
// POP
// SHOW


//9875->29*4
