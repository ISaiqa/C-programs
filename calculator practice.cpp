#include<iostream>
using namespace std;

int main() {
    int word, sum = 0, multiply = 1, number;
    char choice;
    
    cout << "1. Addition.\n2. Multiplication.\n3. Subtract.\n4. Division\n";
    cout << "Which action do you want to perform: ";
    cin >> choice;

    switch(choice) {
        case '1':
            again_addition:
            cout << "Do you want to add another number (y/n)? ";
            cin >> choice;
            if(choice == 'y') {
                cout << "Enter the number: ";
                cin >> number;
                sum += number;
                cout << "Sum = " << sum << endl;
                goto again_addition;
            }
            break;

        case '2':
            again_multiplication:
            cout << "Do you want to multiply another number (y/n)? ";
            cin >> choice;
            if(choice == 'y') {
                cout << "Enter the number: ";
                cin >> number;
                multiply *= number;
                cout << "Product = " << multiply << endl;
                goto again_multiplication;
            }
            break;

        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}