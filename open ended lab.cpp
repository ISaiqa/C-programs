#include <iostream>
using namespace std;

int main() {
    char n;
    char z;
    int i = 1;
    
    while (true)
	 {
        cout << "Enter the " << i << "st name and press 1 if the name is complete: " << endl;
        
        while (cin >> n) {
            if ((n == 'b') || (n == 'c') || (n == 'd') || (n == 'f') || (n == 'g') || (n == 'h') || (n == 'j') || (n == 'k') || (n == 'l') || (n == 'm') || (n == 'p') || (n == 'q') || (n == 'r') || (n == 't') || (n == 'v') || (n == 'w') || (n == 'x') || (n == 'y')) {
                cout << n;
                 cout << n;
                int x = n;
                cout << x << endl;
            } else if (n == 's') {
                cout << "$";
            } else if (n == 'a') {
                cout << "@";
            } else if (n == 'e') {
                cout << "<";
            } else if (n == 'i') {
                cout << "!";
            } else if (n == 'o') {
                cout << "()";
            } else if (n == 'u') {
                cout << "^";
            } else if (n == 'z' || n == '1') {
                cout << " " << i << "st Name is complete." << endl;
                break;
            }
        }
        
        cout << "Enter 'yy' if you want to enter another name, or 'n' to end the program: ";
        cin >> z;
          
        if (z == 'y' || z == 'Y') {
            cout << "OK, let's enter the next name." << endl;
            i++;
        } else if (z == 'n') {
            break;
        }
    }
    
    return 0;
}





