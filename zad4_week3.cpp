#include <iostream>

using namespace std;

int main()
{
	int x;
	cout << "Enter an integer to check wheter it is an ascii letter or not: ";
	cin >> x;

	if ((x >= 65 && x <= 90) || (x >= 97 && x <= 122))
	{
		cout << "The integer you entered is the ascii letter \"" << (char)x << "\".";
	}
	else
	{
		cout << "Not an ascii letter.";
	}
	
	return 0;
}
