#include <iostream>

using namespace std;

int main()
{
	double num1, num2;
	cout << "Enter 2 numbers to check how many are positive: ";
	cin >> num1 >> num2;

	if (num1 >= 0 && num2 >= 0)
	{
		cout << "Both are positive.";
	}
	else if ((num1 >= 0 && num2 < 0) || (num1 < 0 && num2 >= 0))
	{
		cout << "One of the numbers is positive.";	
	}
	else
	{
		cout << "Neither are positive.";
	}
	
	return 0;
}
