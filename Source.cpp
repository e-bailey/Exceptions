#include <iostream>

using namespace std;

char character(char, int);

int main()
{
	char start, value;
	int offset;


	cout << "Enter starting character: ";
	cin >> start;

	cout << "Enter offset: ";
	cin >> offset;


	value = character(start, offset);
	cout << value;


}
char character(char start, int offset)
{


}