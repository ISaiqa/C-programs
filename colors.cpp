#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    int n;
    int F1;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // Handle to console
    int answer;
    SetConsoleTextAttribute(hConsole, 7); // Set default text color
    cout << "Enter how many numbers on which you want to perform Operation" << endl;
    cin >> n;
    cout << "Enter first integer" << endl;
    cin >> answer;

    for (int i = 1; i <= n - 1; i++)
    {
        char oper;
        cout << "Press ";
        SetConsoleTextAttribute(hConsole, 11); // Set color to light cyan
        cout << "+. for addition" << endl;
        SetConsoleTextAttribute(hConsole, 10); // Set color to light green
        cout << "-. for subtraction" << endl;
        SetConsoleTextAttribute(hConsole, 14); // Set color to yellow
        cout << "*. for multiplication" << endl;
        SetConsoleTextAttribute(hConsole, 13); // Set color to light purple
        cout << "/. for division" << endl;
        SetConsoleTextAttribute(hConsole, 9); // Set color to light blue
        cout << "=. if you want to exit" << endl;
        SetConsoleTextAttribute(hConsole, 15); // Set color to white
        cin >> oper;

        if (oper == '=')
        {
            break;
        }
        else
            switch (oper)
            {
            case '+':
            {
                cout << " Enter another integer: ";
                SetConsoleTextAttribute(hConsole, 7); // Set default text color
                cin >> F1;
                answer += F1;
                break;
            }
            case '-':
            {
                cout << " Enter another integer: ";
                SetConsoleTextAttribute(hConsole, 7); // Set default text color
                cin >> F1;
                answer -= F1;
                break;
            }
            case '*':
            {
                cout << " Enter another integer: ";
                SetConsoleTextAttribute(hConsole, 7); // Set default text color
                cin >> F1;
                answer = answer * F1;
                break;
            }
            case '/':
            {
                cout << " Enter another integer: ";
                SetConsoleTextAttribute(hConsole, 7); // Set default text color
                cin >> F1;
                if (F1 != 0)
                    answer = answer / F1;
                else
                    cout << " Division by zero error!" << endl;
                break;
            }
            default:
            {
                SetConsoleTextAttribute(hConsole, 12); // Set color to light red
                cout << " Invalid choice" << endl;
                i--;
                break;
            }
            }
    }
    SetConsoleTextAttribute(hConsole, 7); // Set default text color
    cout << " Your final answer is " << answer << endl;
    return 0;
}
