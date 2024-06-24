#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    float eng, sci, math;
    cout << "\n Enter marks in English: ";
    cin >> eng;
    cout << "\n Enter marks in Science: ";
    cin >> sci;
    cout << "\n Enter marks in Math: ";
    cin >> math;

    double sum = eng + sci + math;
    double avg = sum / 3.0;
    cout << "\n Average marks of student: " << avg;

    // Determine the grade using while loops
    while (avg >= 90) {
        cout << "\n Grade is A";
        avg=avg- 100;
    }
    while (avg >= 80) {
        cout << "\n Grade is B";
        avg=avg- 100;
    }
    while (avg >= 70) {
        cout << "\n Grade is C";
        avg=avg- 100;
    }
    while (avg >= 60) {
        cout << "\n Grade is D";
        avg=avg- 100;
    }
    while (avg >= 50) {
        cout << "\n Grade is E";
        avg=avg- 100;
    }
    while (avg >= 0) {
        cout << "\n Student failed";
        avg=avg- 100;
    }

    return 0;
}

