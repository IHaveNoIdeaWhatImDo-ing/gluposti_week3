#include <iostream>

using namespace std;

int main()
{
  cout << "Enter the fence's length: ";
  int length;
  cin >> length;
  
  int length_traveled = length  * (length + 1);
  
  cout << length_traveled << " meters traveled by Trishko.";
}
