#include <iostream>

using namespace std;

int main()
{
	int num1, num2;
	cin >> num1 >> num2;
	
	int larger_num = (num1 > num2) ? num1 : num2;
	
	cout << "The larger number is: " << larger_num;
	
	return 0;
}
