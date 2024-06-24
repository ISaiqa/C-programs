#include <iostream>
#include <string>
using namespace std;
int main() 
{
    char ch,z,n;
    int i=1;
   // while(i!=0)
    //{
    	cout<<"Enter your full name.";
    	for(int j=1;j<=4;j++)
		{
				cout<<"\n Enter "<<j<<" name:";
			//	cout<<" Press 1 when the "<<j<<" name is compeleted\n ";
			for(int k=1;;k++)
			{
			
				cin.get(ch);
				int x=ch;
			    if (ch == 's') 
				{
                    cout << "$\n"; // Replace 's' with "$"
                }
                else if (ch == 'z') 
				{
                    break; // Stop if 'z' is encountered
                } 
				else if (ch == 'a')
				 {
                    cout << "@\n"; // Replace 'a' with "@"
                }
                else if (ch == 'e') 
				{
                    cout << "<\n"; // Replace 'e' with "<"
                } 
				else if (ch == 'i') 
				{
                    cout << "!\n"; // Replace 'i' with "!"
                } 
				else if (ch == 'o')
				 {
                    cout << "()\n"; // Replace 'o' with "()"
                }
				 else if (ch == 'u')
			    {
                    cout << "^\n"; // Replace 'u' with "^"
                }
                else if (ch=='\n')
                {
                	break;
				}
				 else if ((ch=='b')||(ch=='c')||(ch=='d')||(ch=='f')||(ch=='g')||(ch=='h')||(ch=='j')||(ch=='k')||(ch=='l')||(ch=='m')||(ch=='p')||(ch=='q')||(ch=='r')||(ch=='t')||(ch=='v')||(ch=='w')||(ch=='x')||(ch=='y'))
			  {
                    cout << ch; // Display consonants
                    int x;
                    x=ch;
                    cout<<"( "<<x<<" )\n";
                }
            
			
          }
	     	cout<<"\n Enter yy if you want to display another name and nn if you want to end program:";
		    cin>>z;
		    cin>>n;
		    if (z == 'y' || z == 'Y' || n == 'y' || n == 'Y')
              cout << "\n OK" << endl;
            else //if (z == 'n')
               break;

		}
		
  //  }

    cout << "Thank you for using the program!" << endl;

    return 0;
}
