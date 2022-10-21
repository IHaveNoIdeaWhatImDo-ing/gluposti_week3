#include <iostream>

using namespace std;

int main()
{
	int num1;
	cout << "Enter a month, represented as an integer: ";
	cin >> num1;

	if (num1 >= 1 && num1 <= 12)
	{
		cout << "Valid month.";
	}
	else
	{
		cout << "Invalid month.";
	}
	
	return 0;
}
