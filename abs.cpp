#include<iostream>
using namespace std;

int main() {
    char n;
    char z;

    for (int i = 1; i <= 4; i++) {
        cout << "Enter " << i << " name and press 'z' if the name is complete." << endl;
        
        for (int j = 1; j <= 100; j++) {
            cin >> n;
            if ((n >= 'b' && n <= 'z') || (n >= 'B' && n <= 'Z')) {
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
                else
                    cout << n;
            }
            else if (n == 'z' || n == '1') {
                cout << " " << i << " Name is complete.";
                break;
            }
        }
        
        cout << "\nEnter 'y' if you want to display another name and 'n' if you want to end the program:";
        cin >> z;
        if (!(z == 'y' || z == 'Y'))
            break; // Exit the outer loop
    }
}

