#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double amount, ex_rate = 1.95;
	string BGN, EUR;
	cout << "Enter the wanted value, the curency it's in and the curency you want to convert it in: ";
	cin >> amount >> BGN >> EUR;

	if (BGN == "BGN" && EUR == "EUR")
	{
		cout << amount / ex_rate;
	}
	else if (BGN == "EUR" && EUR == "BGN")
	{
		cout << amount * ex_rate;
	}
	else
	{
		cout << amount;
	}
	
	return 0;
}
