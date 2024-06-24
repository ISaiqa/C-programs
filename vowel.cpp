#include<iostream>
using namespace std;

bool isVowel(char ch) 
{
	ch = tolower(ch); // convert to lowercase
	return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
	char ch;
	cout << "Enter a character: ";
	cin >> ch;

	if(isVowel(ch))
		cout << ch << " is a vowel.";
	else
		cout << ch << " is a consonant.";

	return 0;
}
