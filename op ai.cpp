#include<iostream>
using namespace std;

int main() {
    char n;
    char z;

    while (true) {
        cout << "Enter your full name: ";
        string name;
        cin >> name;

        cout << "Enter your first name: ";
        string firstName;
        cin >> firstName;

        cout << "Enter your middle name (if any): ";
        string middleName;
        cin >> middleName;

        cout << "Enter your last name: ";
        string lastName;
        cin >> lastName;

        cout << "Enter your sir name (if any): ";
        string sirName;
        cin >> sirName;

        string fullName = firstName + " " + middleName + " " + lastName + " " + sirName;

        for (int i = 0; i < fullName.length(); i++) {
            n = fullName[i];
            if ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z')) {
                if (n == 'a')
                    cout << '@';
                else if (n == 'e')
                    cout << '<';
                else if (n == 'i')
                    cout << '!';
                else if (n == 'o')
                    cout << "()";
                else if (n == 'u')
                    cout << '^';
                else if (n == 's')
                    cout << "$";
                else if (n == 'z') {
                    cout << "Name is complete." << endl;
                    break;
                }
                else
                    cout << n;

                cout << " " << static_cast<int>(n) << endl; // Display integer equivalent
            }
        }
        
        cout << "\nPress enter when the name is complete." << endl;
        cin.ignore(); // Ignore previous input
        cin.get(); // Wait for enter press

        cout << "\nDo you have another name to enter? Press 'yy' or 'n': ";
        cin >> z;
        if (!(z == 'y' || z == 'Y'))
            break;
        else
            cout << "\nOK\n" << endl;
    }

    return 0;
}

