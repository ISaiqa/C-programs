#include <iostream>

using namespace std;

 

int main() {

    int rows;

 

    // Prompt the user until a positive integer is entered

    do {

        cout << "Enter the number of rows for the pattern (a positive integer between 5 and 15): ";

         cin>>rows;

    }
    while(rows>0);

    while(rows<=5||rows>=10)

   {
      cout<<"enter rows between 5 and 15    "<<endl;

       cin>>rows;

   }

   

                // Outer loop for rows

   for (int i = 1; i<=rows;  ++i) {                     

        // Inner loop for columns

       for (int j = 1;j<=rows; ++j) {

            // If the sum of row and column indexes is even

            if ((i + j) % 2 == 0) {

                // If column index is greater than row index, print '*'

                if (j > i)

                    cout << "* ";

                // Otherwise, print '-'

                else

                    cout << "- ";

            }

            // If the sum of row and column indexes is odd

            else {

                // If column index is greater than row index, print '+'

                   if(j>i)

                    cout << "+ ";

                // Otherwise, print '|'

                else

                    cout << "| ";

            }

        }

        cout << endl; // Move to the next line after each row

    }

 

    return 0;

}





