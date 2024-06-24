#include <iostream>
#include <string>
using namespace std;
// Overloaded function to add different data types
int add(int a, int b) 
{
	return a + b;
}
double add(double a, double b) 
{
	return a + b;
}
string add(string a, string b)
{
	return a + b;
}
int main() {
	// Calling overloaded functions
	cout << "Result of add(2, 3): " << add(2, 3) << endl;
	cout << "Result of add(2.5, 3.5): " << add(2.5, 3.5) << endl;
	cout << "Result of add(Hello,World): " << add("Hello ", "World!") << endl;
	return 0;
}
