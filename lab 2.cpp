#include <iostream>
using namespace std;

int main() {
  char meal;
  for(int i=1;i<=7;i++){
     cout<<"its Our "<<i<<" day\n";
     for(int j=1;j<=3;j++)
     {
       
       cout<<"press A if you have eaten bread, press B for egg, C for salad and D for milk\n";
       cout<<"Enter your"<<j<<"meal\n";
       cin>>meal;
       if(meal=='a'||meal=='A'){
        cout<<"oh the crab";
       }
       else if(meal=='b'||meal=='B'){
        cout<<"Good protein";
       }
       else if(meal=='c'||meal=='C'){
        cout<<"well done";
       }
       else if(meal=='d'||meal=='D'){
        cout<<"Strong bones";
       }
       else{
       cout<<"invalid Input";
       j--;
       }
       cout<<"\nHave a good day\n";
     }
     
  cout<<"\nYou r near to your goal\n";
  
  
  }
}
