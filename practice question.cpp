#include <iostream>
using namespace std;

int main() {
    int num=0;
    char choice;
    int sum = 0;

    do {
        cout << "Enter an integer (or 'N' to stop): ";
        cin >> choice;

        if (choice != 'N' && choice != 'n') {
            cin >> num;
            sum += num;
        }
    } while (choice != 'N' && choice != 'n');

    cout << "Sum of entered integers: " << sum << std::endl;

    return 0;
}

