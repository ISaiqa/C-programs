#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    char ch,z,n;
    int i=1;
    cout << " Enter your full name: ";
    for(int j=1; j<=4; j++)
	 {
        cout << "\n Enter " << j << " name: ";
        cout << " Press 1 when the " << j << " name is completed\n";
        for(int k=1;;k++)
		 {
            cin.get(ch);
            int x=ch;
            // Converting character to lowercase for comparison
            char lowerCh = tolower(ch);
            if (lowerCh == 's') 
			{
                cout << " $\n"; // Replace 's' with "$"
            } 
			else if (lowerCh == 'z')
			 {
                break; // Stop if 'z' is encountered
            }
			 else if (lowerCh == 'a')
			  {
                cout << " @\n"; // Replace 'a' with "@"
            }
			 else if (lowerCh == 'e') 
			{
                cout << " <\n"; // Replace 'e' with "<"
            } 
			else if (lowerCh == 'i') 
			{
                cout << " !\n"; // Replace 'i' with "!"
            } 
			else if (lowerCh == 'o') 
			{
                cout << " ()\n"; // Replace 'o' with "()"
            } 
			else if (lowerCh == 'u')
			 {
                cout << " ^\n"; // Replace 'u' with "^"
            }
			 else if (lowerCh == '1')
			  {
                break;
            }
			 else if (lowerCh >= 'b' && lowerCh <= 'z')
			  {
              
			    cout <<" "<<ch; // Display consonants
                int x;
                x = ch;
                cout << " ( " << x << " )\n";
            }
        }
        if(j==1)
		   cout <<"First name is complete\n";
		else if (j==2)
		   cout <<"Second  name is complete\n";
		else if (j==3)
		   cout <<"Third  name is complete\n";   
  		else if (j==4)
		   cout <<"Fourth  name is complete\n"; 
	   	
        cout << " Enter 'yy' if you want to display another name and 'nn' if you want to end the program: ";
        cin >> z>>n ;
        if (z == 'y' || z == 'Y' || n == 'y' || n == 'Y') 
		{
            cout << "\n OK\n";
        } 
		else if (z == 'n' || z == 'N')
	    {
            break;
        }
    }
    cout << " Thank you for using the program!" << endl;
    getch();
    return 0;
}

