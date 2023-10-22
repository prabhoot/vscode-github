#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Enter the input:\n";
    string str;
    string temp;
    
    // Read input lines until "~" is encountered
    while (true) {
        getline(cin, temp);
        if (temp == "~") {
            break;
        }
        str += temp + '\n'; // Add newline character to separate lines
    }
    
    cout << str << endl;
    
    size_t n = str.size();
    size_t i = 0;
    
    // Loop to process the entire input string
    while (i < n) {
        if (str[i] == '/' && i + 1 < n) {
            if (str[i + 1] == '/') { // Check for single-line comment
                size_t pos = str.find('\n', i); // Find the newline character
                if (pos != string::npos) {
                    str.erase(i, pos - i); // Remove the single-line comment
                    n = str.size(); // Update the size of the string
                } else {
                    break; // Stop if no newline character is found
                }
            } else if (str[i + 1] == '*') { // Check for multi-line comment
                size_t end_pos = str.find("*/", i + 2); // Find the end of the comment
                if (end_pos != string::npos) {
                    str.erase(i, end_pos - i + 2); // Remove the multi-line comment
                    n = str.size(); // Update the size of the string
                } else {
                    break; // Stop if no end of the comment is found
                }
            } else {
                i++; // Move to the next character if it's not a comment
            }
        } else {
            i++; // Move to the next character if it's not a comment
        }
    }
    
    cout << "Upon comment removal:" << endl << str;

    return 0;
}
