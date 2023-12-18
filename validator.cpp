#include <iostream>
#include <fstream>
#include <stack>
#include <string>

using namespace std;

bool validateHTMLFile(const string& filePath) {
    ifstream file(filePath);

    if (!file.is_open()) {
        cerr << "Error: Unable to open the file." << endl;
        return false;
    }

    stack<char> tagStack;
    string line;

    while (getline(file, line)) {
        for (char c : line) {
            if (c == '<') {
                tagStack.push(c);
            } else if (c == '>') {
                if (tagStack.empty() || tagStack.top() != '<') {
                    cerr << "Error: Invalid tag closing. File is not valid." << endl;
                    return false;
                }
                tagStack.pop();
            }
        }
    }

    file.close();

    if (!tagStack.empty()) {
        cerr << "Error: Some tags are not closed. File is not valid." << endl;
        return false;
    }

    cout << "File is valid." << endl;
    return true;
}

int main() {
    cout << "HTML File Validator" << endl;

    string filePath;
    cout << "Enter the path to the HTML file: ";
    cin >> filePath;

    if (validateHTMLFile(filePath)) {
        cout << "Validation successful." << endl;
    } else {
        cout << "Validation failed." << endl;
    }

    return 0;
}

