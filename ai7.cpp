#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
    char charInput;
    int intInput;
    float floatInput;

    cout<<"Enter a character: ";
    cin>>charInput;
    cout<<"Enter an integer: ";
    cin>>intInput;
    cout<<"Enter a float: ";
    cin>>floatInput;

    cout<<"\nYou entered char: "<< charInput <<endl;
    cout<<"Equivalent int: "<<static_cast<int>(charInput)<<endl;
    cout<<"Equivalent float: "<<static_cast<float>(charInput)<<endl;

    cout<<"\nYou entered int: "<<intInput<<endl;
    cout<<"Equivalent char: "<<static_cast<char>(intInput)<<endl;
    cout<<"Equivalent float: "<<static_cast<float>(intInput)<<endl;

    cout<<"\nYou entered float: "<<fixed<<setprecision(2)<<floatInput<<endl;
    cout<<"Equivalent char: "<<static_cast<char>(static_cast<int>(floatInput))<<endl;
    cout<<"Equivalent int: "<<static_cast<int>(floatInput)<<endl;

    return 0;
}