#include "header.h"
// ATM PIN 3 Times

string ReadPinCode()
{
  string PIN;
  cout << "Please Enter Your PIN:- " << endl;
  cin >> PIN;
  return PIN;
}
bool Login()
{
  string PIN;
  int Counter = 3;
  do
  {
    Counter--;
    PIN = ReadPinCode();
    if (PIN == "1234")
    {
      return 1;
    }
    else
    {
      cout << "Wrong PIN, You Have " << Counter << " more tries\n" ;
      system("color 4F");
    }
  } while (PIN != "1234" && Counter >= 1);
  return 0;
}
int main()
{
  if (Login())
  {
    system("color 2F");
    cout << "\nYour account balance is " << 7500 << '\n';
  }
  else
  {
    cout << "Your Card Blocked, Call The Bank For Help\n";
  }
  return 0;
}