#include <iostream>
using namespace std;

int main()
{
  int years;
  cout << "Enter a year leaps or not" << endl;
  cin >> years;

  if (years % 4 == 0)
  {
    cout << "leap year";
  }
  else
  {
    cout << "Not a leap year";
  }
}