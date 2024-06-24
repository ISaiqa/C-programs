#include<iostream>
using namespace std;

int main() {
    int i;
    float f;
    char c;

    // Take input from user
    cout << "Enter an integer: ";
    cin >> i;

    cout << "Enter a float: ";
    cin >> f;

    cout << "Enter a character: ";
    cin >> c;

    // Convert and display
    float iToF = i; // int to float
    char iToC = i; // int to char

    cout << "Integer " << i << " to float: " << iToF << endl;
    cout << "Integer " << i << " to character: " << iToC << endl;

    int fToI = f; // float to int
    char fToC = f; // float to char

    cout << "Float " << f << " to integer: " << fToI << endl;
    cout << "Float " << f << " to character: " << fToC << endl;

    float cToF = c; // char to float
    int cToI = c; // char to int

    cout << "Character " << c << " to float: " << cToF << endl;
    cout << "Character " << c << " to integer: " << cToI << endl;

    return 0;
}