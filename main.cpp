#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function to write data to a file
void writeToFile(const string& filename) {
    ofstream outfile(filename); // Overwrites existing content
    if (!outfile) {
        cerr << "Error opening file for writing.\n";
        return;
    }

    cout << "Enter text to write to the file:\n";
    string data;
    cin.ignore();
    getline(cin, data);
    outfile << data << endl;

    cout << "Data written successfully.\n";
    outfile.close();
}

// Function to read data from a file
void readFromFile(const string& filename) {
    ifstream infile(filename);
    if (!infile) {
        cerr << "Error opening file for reading.\n";
        return;
    }

    cout << "Contents of the file:\n";
    string line;
    while (getline(infile, line)) {
        cout << line << endl;
    }

    infile.close();
}

// Function to append data to a file
void appendToFile(const string& filename) {
    ofstream outfile(filename, ios::app);
    if (!outfile) {
        cerr << "Error opening file for appending.\n";
        return;
    }

    cout << "Enter text to append:\n";
    string data;
    cin.ignore();
    getline(cin, data);
    outfile << data << endl;

    cout << "Data appended successfully.\n";
    outfile.close();
}

int main() {
    string filename = "managed_file.txt";
    int choice;

    while (true) {
        cout << "\n=== File Management Tool ===\n";
        cout << "1. Write to File\n";
        cout << "2. Read from File\n";
        cout << "3. Append to File\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                writeToFile(filename);
                break;
            case 2:
                readFromFile(filename);
                break;
            case 3:
                appendToFile(filename);
                break;
            case 4:
                cout << "Exiting the program. Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
