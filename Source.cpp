/*
Week 15
Part A
*/

#include <iostream>
#include <string>

using namespace std;

char character(char, int);

//Main function for testing character function.
int main()
{
	char start, value;
	int offset;


	cout << "Enter starting character: ";
	cin >> start;

	cout << "Enter offset: ";
	cin >> offset;

	try
	{
		value = character(start, offset);
		cout << value;
	}
	catch (string exception)
	{

		cout << exception;

	}
	return 0;
}
//Character function. Tests characters based on user input and throws exceptions when necessary.
char character(char start, int offset)
{
	char end = start + offset;

	//Throws character exception when starting character is not a letter.
	if (!isalpha(start))
	{
		string exception = "Invalid Character";
		throw exception;
	}
	//Throws range exception when final value is not an alphabetical letter.
	else if (!isalpha(end))
	{

		string exception = "Invalid Range";
		throw exception;

	}
	//Throws range exception when final value does not match case of starting value.
	else if (isupper(start) && islower(end) || islower(start) && isupper(end))
	{

		string exception = "Invalid Range";
		throw exception;

	}
	else
	{
		return static_cast<char>(start) + offset;
	}
	
}