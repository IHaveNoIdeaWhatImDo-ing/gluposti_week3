#include <iostream>

using namespace std;

int main()
{
  int beer, rakija, ice;
  cout << "Enter wheter Tishko has cold beer, cold rakija and/or ice: ";
  cin >> beer >> rakija >> ice;
  
  if (beer || (rakija && ice))
  {
    cout << "Drinks home.";
  }
  else
  {
    cout << "Goes to the store."
  }
}
