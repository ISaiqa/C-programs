#include <iostream>
#include <string>
using namespace std;

int main() {
    char anotherName = 'y'; // Initialize with 'y' to enter the loop

    while (tolower(anotherName) == 'y') {
        string fullName;
        cout << "Enter your full name: ";
        getline(cin, fullName);

        int nameCount = 1; // To keep track of the name being entered
        char ch;
        for (int i = 0; i < fullName.length(); i++) {
            ch = tolower(fullName[i]); // Convert to lowercase for easier comparison

            if (isalpha(ch)) { // Check if it's an alphabet character
                if (ch == 's') {
                    cout << "$"; // Replace 's' with "$"
                } else if (ch == 'z') {
                    break; // Stop if 'z' is encountered
                } else if (ch == 'a') {
                    cout << "@"; // Replace 'a' with "@"
                } else if (ch == 'e') {
                    cout << "<"; // Replace 'e' with "<"
                } else if (ch == 'i') {
                    cout << "!"; // Replace 'i' with "!"
                } else if (ch == 'o') {
                    cout << "()"; // Replace 'o' with "()"
                } else if (ch == 'u') {
                    cout << "^"; // Replace 'u' with "^"
                } else {
                    cout << ch; // Display consonants
                    cout << " (" << static_cast<int>(ch) << ")"; // Display integer equivalent
                }
            } else if (ch == ' ') {
                cout << " "; // Display spaces
            }
        }

        cout << endl; // Add a newline after displaying the modified name

        cout << nameCount << " name is complete." << endl;

        cout << "Do you have another name to display? (Press 'yy' or 'n'): ";
        cin >> anotherName;
        cin.ignore(); // Ignore any remaining characters in the input buffer
    }

    cout << "Thank you for using the program!" << endl;

    return 0;
}
