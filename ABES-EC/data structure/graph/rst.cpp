#include <bits/stdc++.h>
using namespace std;
bool areBracketsBalanced(string sym) {
    stack<char> temp;
    for (int i = 0; i < sym.length(); i++) {
        if (temp.empty()) {
            temp.push(sym[i]);
        } else if ((temp.top() == '(' && sym[i] == ')') || (temp.top() == '{' && sym[i] == '}') || (temp.top() == '[' && sym[i] == ']')) {
            temp.pop();
        } else {
            temp.push(sym[i]);
        }
    }
    if (temp.empty()) {
        return true;
    }
    return false;
}
int main() {
    string sym = "{()}[]";
    if (areBracketsBalanced(sym))
        cout << "Balanced";
    else
        cout << "Not Balanced";
    return 0;
}
