#include <bits/stdc++.h>
using namespace std;

bool isoperator(string str) {
    if (str == "+" || str == "-" || str == "*" ||
        str == "/" || str == ">" || str == "<" ||
        str == "=")
        return true;
    return false;
}
bool isinterger(string str) {
    for (auto i : str) {
        if (!isdigit(i) || i == '.') {
            return 0;
        }
    }
    return true;
}
bool isdelimiter(string str) {
    if (str == " " || str == "+" || str == "-" || str == "*" ||
        str == "/" || str == "," || str == ";" || str == ">" ||
        str == "<" || str == "=" || str == "(" || str == ")" ||
        str == "[" || str == "]" || str == "{" || str == "}")
        return true;
    return false;
}
bool iskeyword(string str) {
    if ((str == "if") || (str == "else") ||
        (str == "while") || (str == "do") ||
        (str == "break") ||
        (str == "continue") || (str == "int") || (str == "double") || (str == "float") || (str == "return") || (str == "char") || (str == "case") || (str == "char") || (str == "sizeof") || (str == "long") || (str == "short") || (str == "typedef") || (str == "switch") || (str == "unsigned") || (str == "void") || (str == "static") || (str == "struct") || (str == "goto"))
        return true;
    return false;
}
bool isidentifier(string str) {
    for (auto i : str) {
        if (i == '_') {
            return true;
        } else if (isalpha(i)) {
            return true;
        } else
            return false;
    }
    return true;
}
void parse(string str) {
    vector<string> v;
    int n = str.length();
    string temp;
    for (int i = 0; i < n; i++) {
        if (str[i] != ' ') {
            temp += str[i];
        } else {
            v.push_back(temp);
            temp = "";
        }
    }
    for (auto i : v) {
        if (iskeyword(i)) {
            cout << i << " is a keyword\n";
        } else if (isidentifier(i)) {
            cout << i << " is a identifier\n";
        } else if (isinterger(i)) {
            cout << i << " is a integer\n";
        } else if (isoperator(i)) {
            cout << i << " is a operator\n";
        } else if (isdelimiter(i)) {
            cout << i << " is a delimiter\n";
        } else {
            cout << i << " invalid identifier\n";
        }
    }
    // for (auto i : v) {
    //     cout << i << "\n";
    // }
}

int main() {
    string str = "int a = b + 1c ; ";
    parse(str);
    return 0;
}