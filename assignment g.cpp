#include <iostream>
using namespace std;

int main() {
    float eng, sci, math;
    cout << "Enter marks in English: ";
    cin >> eng;
    cout << "Enter marks in Science: ";
    cin >> sci;
    cout << "Enter marks in Math: ";
    cin >> math;

    double sum = eng + sci + math;
    double avg = sum / 3.0;
    cout << "Average marks of student: " << avg << endl;

    cout << "Grade is ";

    // Determine the grade using only while loops
    while (avg >= 90) 
	{
        cout << "A";
        avg=avg-100;
    }
    while (avg >= 80)
	 {
        cout << "B";
        avg=avg-100;
    }
    while (avg >= 70)
	 {
        cout << "C";
        avg=avg-100;
    }
    while(avg >= 60)
	 {
        cout << "D";
        avg=avg-100;
    }
    while (avg >= 50)
	 {
        cout << "E";
        avg=avg-100;
    }
    while(avg < 50)
	 {
        cout << "Student failed";
        avg=avg-100;
    }

    cout << endl;

    return 0;
}

