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

    // Determine the grade using if else if
    if((avg>=80)&&(avg<=100))
       cout<<"\n Grade is A";
    else if((avg>=70)&&(avg<80))
       cout<<"\n Grade is B";
    else if((avg>=60)&&(avg<70))
       cout<<"\n Grade is C";
    else if((avg>=50)&&(avg<60))
       cout<<"\n Grade is D";
    else if((avg>=40)&&(avg<50))
       cout<<"\n Grade is E";
    else
       cout<<"\n Student Failed";
    
    return 0;
}
