#include <iostream>

using namespace std;

int main()
{
	int n, m, k;
	cout << "Enter the width and height of a chocolate bar by its segments and the number of chocolates you want to take by breaking only a single line: ";
	cin >> n >> m >> k;

	if ((k % m == 0 || k % n == 0) && k >= 0)
	{
		cout << "Possible.";
	}
	else
	{
		cout << "Unable to get that many.";
	}
	
	return 0;
}
