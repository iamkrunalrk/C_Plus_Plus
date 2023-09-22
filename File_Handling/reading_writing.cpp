#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // ------------------ Writing to a File (ofstream) ------------------

    // Create an output file stream
    ofstream outFile("example.txt");

    // Check if the file is open
    if (!outFile.is_open()) {
        cout << "Failed to open the file for writing." << endl;
        return 1; // Exit with an error code
    }

    // Write data to the file
    outFile << "Hello, world!" << endl;
    outFile << "This is a test." << endl;

    // Close the output file stream
    outFile.close();

    cout << "Data has been written to 'example.txt'." << endl;

    // ------------------ Reading from a File (ifstream) ------------------

    // Create an input file stream
    ifstream inFile("example.txt");

    // Check if the file is open
    if (!inFile.is_open()) {
        cout << "Failed to open the file for reading." << endl;
        return 1; // Exit with an error code
    }

    // Read data from the file and display it
    cout << "Contents of 'example.txt':" << endl;
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    // Close the input file stream
    inFile.close();

    return 0; // Exit successfully
}