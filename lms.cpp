#include <iostream>
#include<conio.h>
#include <string>
using namespace std;
const int maxbook = 100;
const int maxborrower = 100;
struct Book 
{
    string title,author;
    int qty,ISBN;
};
struct Borrower 
{
    string name;
    int ID;
};
Book books[maxbook];
Borrower borrowers[maxborrower];
int nbooks = 0,nborrowers = 0;
void addbook(int &a) 
{
	for(int i=1;i<=a;i++)
	{
		if (nbooks < maxbook) 
	    {
	    	cout << "Enter book title: ";
            cin.ignore(); 
            getline(cin, books[nbooks].title);
            cout << "Enter author: ";
            getline(cin, books[nbooks].author);
            cout << "Enter quantity: ";
            cin >> books[nbooks].qty;
            cout << "Enter ISBN: ";
            cin >> books[nbooks].ISBN;
            nbooks++;
            cout << "Book added" << endl;
		} 
		else
		  cout << "Maximum books entered" << endl;
    }
}
void showbooks() 
{
    cout << "Books in the library:" << endl;
    for (int i = 0; i < nbooks; i++) 
	{
        cout << i + 1 << ". " << books[i].title << " by " << books[i].author
             << " (Quantity: " << books[i].qty << ")" <<" ISBN:"<<books[i].ISBN<< endl;
    }
}
void searchbooktitle()
{
	string sbook;
	cout<<"\n Enter book tile you want to search:";
	cin.ignore();
	getline(cin,sbook);
	for (int i = 0; i < nbooks; i++) 
	{
		if(sbook==books[i].title)
		{
			cout<<"\n Information of book you searched:";
		    cout << i + 1 << ". " << books[i].title << " by " << books[i].author
            << " (Quantity: " << books[i].qty << ")" <<" ISBN:"<<books[i].ISBN<< endl;
		}
		else
		cout<<"\n Book is not available.";
		break;
	}
}
void searchbookISBN()
{
	int isbnbook;
	cout<<"\n Enter ISBN of book you want to search:";
	cin>>isbnbook;
	for (int i = 0; i < nbooks; i++) 
	{
		if(isbnbook==books[i].ISBN)
		{
			cout<<"\n Information of book you searched:";
		    cout << i + 1 << ". " << books[i].title << " by " << books[i].author
            << " (Quantity: " << books[i].qty << ")" <<" ISBN:"<<books[i].ISBN<< endl;
            
		}
		else
		cout<<"\n Book is not available.";
		break;
	}
}
void searchbookauthor()
{
	string abook;
	cout<<"\n Enter book tile you want to search:";
	cin.ignore();
	getline(cin,abook);
	for (int i = 0; i < nbooks; i++) 
	{
		if(abook==books[i].author)
		{
			cout<<"\n Information of book you searched:";
		    cout << i + 1 << ". " << books[i].title << " by " << books[i].author
            << " (Quantity: " << books[i].qty << ")" <<" ISBN:"<<books[i].ISBN<< endl;
            
		}
		else
		cout<<"\n Book is not available.";
		break;
	}
}
void addborrower(int &b) 
{
   for(int i=1;i<=b;i++)
   {
   	   if (nborrowers < maxborrower) 
	{
        cout << "Enter borrower name: ";
        cin.ignore(); 
        getline(cin, borrowers[nborrowers].name);
        cout << "Enter borrower ID: ";
        cin >> borrowers[nborrowers].ID;
        nborrowers++;
        cout << "Borrower added." << endl;
    } else 
	
        cout << "Maximum borrowers entered." << endl;
    
   }
   
   
}
void showborrowers() 
{
    cout << "Borrowers in the library:" << endl;
    for (int i = 0; i < nborrowers; i++) 
	{
        cout << i + 1 << ". " << borrowers[i].name << " (ID: " << borrowers[i].ID << ")" << endl;
    }
}
void searchborrowerID()
{
	int id;
	cout<<" Enter borrower ID you want to serach:";
	cin>>id;
	for (int i = 0; i < nborrowers; i++)
	{
		if(id==borrowers[i].ID)
		{
			cout<<" Information of borrower you searched for:";
			cout << i + 1 << ". " << borrowers[i].name << " (ID: " << borrowers[i].ID << ")" << endl;
			
		}
		else
		cout<<" Borrower not found.";
		break;
	}
	
}
void searchborrowerName()
{
	string bname;
	cout<<" Enter borrower name you want to serach:";
	cin.ignore();
	getline(cin,bname);
	for (int i = 0; i < nborrowers; i++)
	{
		if(bname==borrowers[i].name)
		{
			cout<<" Information of borrower you searched for:";
			cout << i + 1 << ". " << borrowers[i].name << " (ID: " << borrowers[i].ID << ")" << endl;
			
		}
		else
		cout<<" Borrower not found.";
		break;
	}
	
}

int main() {
    int choice,n;
    do {
        cout <<"\nLibrary Management System Menu:" << endl;
        cout <<"1. Add Book" << endl;
        cout <<"2. Display Books" << endl;
        cout <<"3. Add Borrower" << endl;
        cout <<"4. Display Borrowers" << endl;
        cout <<"5. Search book by TITLE" << endl;
        cout <<"6. Search book by ISBN" << endl;
        cout <<"7. Search book by AUTHOR" << endl;
        cout <<"8. Search borrower by ID" << endl;
        cout <<"9. Search borrower by name" << endl;
        cout <<"10. Exit" << endl;
        cout <<" Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout<<" How many books you want to add:";
                cin>>n;
                addbook(n);
                
                break;
            case 2:
                showbooks();
                break;
            case 3:
            	cout<<" How many borrowers you want to add:";
            	cin>>n;
                addborrower(n);
                break;
            case 4:
                showborrowers();
                break;
            case 5:
            	searchbooktitle();
            	break;
            case 6:
            	searchbookISBN();
            	break;
            case 7:
            	searchbookauthor();
            	break;
            case 8:
            	searchborrowerID();
            	break;
            case 9:
            	searchborrowerName();
            	break;
            case 10:
                cout << "Exiting. Thank you!" << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 10);

    return 0;
    getch();
}
