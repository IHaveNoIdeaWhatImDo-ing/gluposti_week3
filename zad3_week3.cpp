#include <iostream>

using namespace std;

int main()
{
	int lower_bound, higher_bound, x;
	cout << "Enter a lower and a higher open bound and an arbitrary number: ";
	cin >> lower_bound >> higher_bound >> x;

	if (x >= lower_bound && x <= higher_bound)
	{
		cout << "Inside of the boundaries.";
	}
	else
	{
		cout << "Outside of the boundaries.";
	}
	
	return 0;
}
