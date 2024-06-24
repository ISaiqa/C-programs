#include<iostream>
using namespace std;
int main ()
{
    int n;
    int F1;
    cout<<"enter how many numbers on which you want to perform Operation "<<endl;
    cin>>n;
    int answer;
    cout<<"enter first integer"<<endl;
    cin>>answer;
    for(int i=1;i<=n-1;i++)
    {
        char oper;
        cout<<"press +. for addition"<<endl;
        cout<<"press -. for subtraction"<<endl;
        cout<<"press *. for multiplication"<<endl;
        cout<<"press /. for division "<<endl;
        cout<<" press =. if you want to exit "<<endl;
        cin>>oper;
        if(oper=='=')
        {
            break;
        }
        else
         switch(oper)
         {
             case '+':
             {
                 cout<<" Enter another integer";
             cin>>F1;
             answer+=F1;
             break;
             }
             case '-':
             {
                 cout<<" Enter another integer";
             cin>>F1;
             answer-=F1;
             break;
         }
         case '*':
             {
                 cout<<" Enter another integer";
             cin>>F1;
             answer=answer*F1;
             break;
             }
             case '/':
             {
                 cout<<" Enter another integer";
             cin>>F1;
             answer=answer/F1;
             break;
             }
             default:
             {
                 cout<<"Invalid choice"<<endl;
                 i--;
                 break;
             }
         }
    }
        cout<<" Your final answer is "<<answer;
        return 0;
}