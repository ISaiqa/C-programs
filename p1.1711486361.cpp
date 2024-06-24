#include<iostream>
using namespace std;

int main() {
    char n;
    char z;
    int x;

    for (int i = 1; i <= 4; i++) {
        cout << " Enter " << i << " name and press '1' if the name is complete." << endl;
        
        bool nameComplete = false; // Flag to track if the name is complete

        for (int j = 1;; j++) {
            cin >> n;
            if ((n >= 'b' && n <= 'z') || (n >= 'B' && n <= 'Z')) {
                cout << n;
                x = n;
                cout << x;
            }
            else if (n == 's') {
                cout << "$";
            }
            else if (n == 'a') {
                cout << "@";
            }
            else if (n == 'e') {
                cout << "<";
            }
            else if (n == 'i') {
                cout << "!";
            }
            else if (n == 'o') {
                cout << "()";
            }
            else if (n == 'u') {
                cout << "^";
            }
            else if (n == 'z' || n == '1') {
                cout << " " << i << " Name is complete.";
                nameComplete = true; // Set the flag to true
            }
            if (nameComplete && (n == 'z' || n == '1')) {
                break; // Exit the inner loop if the name is complete and 'z' or '1' is entered
            }
        }

        // If the name is complete and the user wants to end the program, break out of the outer loop
        if (nameComplete) {
            cout << "\n Enter 'yy' if you want to display another name and 'n' if you want to end program:";
            cin >> z >> x;
            if (z == 'n' || z == 'N') {
                break; // Break out of the outer loop
            }
        }
    }

    return 0;
}

