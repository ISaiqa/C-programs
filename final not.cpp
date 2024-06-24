#include <iostream>
using namespace std;

int main() {
    char ch;
    int i = 1;

    while (i != 0) {
        cout << "Enter your full name.";

        for (int j = 1; j <= 4; j++) {
            cout << "\n Enter " << j << " name:";
            cout << " Press 1 when the " << j << " name is completed\n ";

            for (int k = 1;; k++) {
                cin.get(ch);

                // Check if the input character is a newline character
                if (ch == '\n') {
                   // cout << "You pressed enter without entering a character. Please try again." << endl;
                   // continue; // Continue to next iteration without processing further
                   break;
                }

                int x = ch;

                // Replace characters as per requirements
                switch (ch) {
                    case 's':
                        cout << "$\n"; // Replace 's' with "$"
                        break;
                    case 'z':
                        break; // Stop if 'z' is encountered
                    case 'a':
                        cout << "@\n"; // Replace 'a' with "@"
                        break;
                    case 'e':
                        cout << "<\n"; // Replace 'e' with "<"
                        break;
                    case 'i':
                        cout << "!\n"; // Replace 'i' with "!"
                        break;
                    case 'o':
                        cout << "()\n"; // Replace 'o' with "()"
                        break;
                    case 'u':
                        cout << "^\n"; // Replace 'u' with "^"
                        break;
                    case '1':
                        break; // Stop if '1' is encountered
                    default:
                        // Display consonants
                        cout << ch << "\n( " << x << " )\n";
                        break;
                }

                // Break the loop if '1' or 'z' is encountered
                if (ch == '1' || ch == 'z') {
                    break;
                }
            }
        }

        // Ask if user wants to continue or end the program
        cout << "\n Enter 'y' if you want to enter another full name, or 'n' to end the program: ";
        cin >> ch;

        if (ch != 'y' && ch != 'Y') {
            break; // End the program if user doesn't want to continue
        }
    }

    cout << "Thank you for using the program!" << endl;

    return 0;
}

