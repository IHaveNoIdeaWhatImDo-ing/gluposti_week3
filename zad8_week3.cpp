#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a, b, c;
	cout << "Enter the coeficients of a polynomial of the type \"a.x^2 + b.x + c = 0\": ";
	cin >> a >> b >> c;

	double D = b * b - 4 * a * c,
	       x1 = (-b + sqrt(D)) / (2 * a), x2 = (-b - sqrt(D)) / (2 * a);

	if (D > 0)
	{
		cout << "x1 = " << x1 << " and x2 = " << x2;
	}
	else if (D == 0)
	{
		cout << "The only solution to x is: " << x1;
	}
	else
	{
		cout << "No real solutions.";
	}
	
	return 0;
}
