//A program is given below, along with its output at the end.

//There are five missing lines in the program. select the correct missing lines using dropdown menu


#include <iostream>

 using namespace std;

 int main() {

    char choice;

    char item;

    int counter = 0,s,t;

    cout<<"enter the number of meals you want to enter: ";

    // Line 1   
	cin>>s; 
 

    // Outermost loop for repeating the menu display process

    for (int i = 1; i <= s; ++i) {

        cout << "Menu: for meal"<<i<<endl;

        cout<< "Enter how many maximum sideline items you want to order with meal "<<i<<endl;

       // Line 2  
	   cin>>t;  
 

        // Middle loop for displaying menu options

        for (int j = 1; j <= t; ++j) {

                cout<<"''s': salad\n  'd':drink\n  't':tea\n  'f':fries\n";

            cout <<  "Enter the name of item  " << j << endl;

            cin>>item;

               { // Inner loop for input validation

        for (int k = j; k < t; ) {

            cout << "Please confirm your choice if you want 1 or 2 more sideline items (1-2): ";

           // Line 3      
           cin>>choice;
           
 

             // Input validation using a nested if statement

            if (choice == '2' || choice == '1') {

            // Line 4   
            //continue;
            ++k;
 

                                                                 // Increment k to exit the loop if input is valid

            } else {

                cout << "Invalid choice! ";

                j=t+1;

              //Line 5  
			  break;
 

            }

           

}}

}}

return 0;}
