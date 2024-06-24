#include <iostream>
#include<conio.h>
using namespace std;

int main()
 {
    char meal;
    
    // Loop for 7 days
    for (int i = 1; i <= 7; i++)
 {
        cout << " Day " << i << ":\n";
        
        // Loop for 3 meals per day
         for (int j = 1; j <= 3; j++) 
        {
            cout << " Meal " << j << ": ";
            cout << " Press A for bread, B for egg, C for salad, or D for milk\n";
            cin >> meal;
               if (meal=='a'||meal=='A')
               {
                    cout << " Oh the carbs\n";
                } 
	 else if (meal=='b'||meal=='B')
	 {
                    cout << " Good proteins\n";
               }
	 else if (meal=='c'||meal=='C')
	 {
                    cout << " Well done\n";
                } 
	else if (meal=='d'||meal=='D') 
	{
                    cout << " Strong bones\n";
                }
           
            else 
          {
                    cout << " Invalid Input\n";
                    j--; 
                }
      
        
        
    }
    cout << " You have had a good day\n\n";
}
    cout << " You are near to your goal\n";

    
    return 0;
    getch();
}

