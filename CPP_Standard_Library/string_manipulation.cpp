#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // ------------------ String Initialization ------------------

    string str1 = "Hello, ";
    string str2 = "world!";
    string str3;

    // ------------------ String Concatenation ------------------

    str3 = str1 + str2;
    cout << "Concatenated String: " << str3 << endl;

    // ------------------ String Length ------------------

    cout << "Length of str3: " << str3.length() << endl;

    // ------------------ Accessing Individual Characters ------------------

    cout << "First character of str3: " << str3[0] << endl;

    // ------------------ Substring ------------------

    string subStr = str3.substr(0, 5); // Extract "Hello"
    cout << "Substring of str3: " << subStr << endl;

    // ------------------ String Comparison ------------------

    string compareStr1 = "apple";
    string compareStr2 = "banana";

    if (compareStr1 == compareStr2) {
        cout << "Strings are equal." << endl;
    } else {
        cout << "Strings are not equal." << endl;
    }

    // ------------------ String Searching ------------------

    string searchStr = "The quick brown fox jumps over the lazy dog.";
    string target = "fox";

    size_t found = searchStr.find(target);

    if (found != string::npos) {
        cout << "Found '" << target << "' at position " << found << endl;
    } else {
        cout << "'" << target << "' not found." << endl;
    }

    // ------------------ String Modification ------------------

    string modifyStr = "This is a sample string.";
    modifyStr.replace(10, 6, "example"); // Replace "sample" with "example"
    cout << "Modified string: " << modifyStr << endl;

    // ------------------ String Case Conversion ------------------

    string upperStr = "hello world";
    transform(upperStr.begin(), upperStr.end(), upperStr.begin(), ::toupper); // Convert to uppercase
    cout << "Uppercase string: " << upperStr << endl;

    string lowerStr = "HELLO WORLD";
    transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower); // Convert to lowercase
    cout << "Lowercase string: " << lowerStr << endl;

    return 0;
}