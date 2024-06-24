#include <iostream>
using namespace std;

int main() {
    int sum = 0, multiply = 1, subtract = 0;
    double divide = 1.0;
    int number;
    char choice;

    cout << " +.Addition.\n-. Subtraction.\n* Multiplication.\n/. Division.\n";
    cout << " Which action do you want to perform: ";
    cin >> choice;

    switch (choice) {
        case '1':
            do {
                cout << "Enter a number (0 to stop): ";
                cin >> number;
                sum += number;
            } while (number != 0);
            cout << "Sum = " << sum << endl;
            break;

        case '2':
            cout << "Enter the first number: ";
            cin >> subtract;
            do {
                cout << "Enter a number (0 to stop): ";
                cin >> number;
                subtract -= number;
            } while (number != 0);
            cout << "Result = " << subtract << endl;
            break;

        case '3':
            do {
                cout << "Enter a number (1 to stop): ";
                cin >> number;
                multiply *= number;
            } while (number != 1);
            cout << "Product = " << multiply << endl;
            break;

        case '4':
            cout << "Enter the first number: ";
            cin >> divide;
            do {
                cout << "Enter a number (1 to stop): ";
                cin >> number;
                divide /= number;
            } while (number != 1);
            cout << "Result = " << divide << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}